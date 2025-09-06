#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define debug(x) cerr << #x << " = " << x << '\n';

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    FAST_IO;

    vi nums = {1, 3, -5, 6, -2};

    unordered_map<int, int> mp;
    int res=0;
    int t = 0;

    for (int i=0; i<sz(nums); i++){
        t += nums[i];

        if (t == 0) res = max(res, i+1);

        if (mp.find(t) == mp.end()) mp[t] = i;
        else {
            res = max(res, i-mp[t]);
        };
    }

    cout << res;

    return 0;
}
