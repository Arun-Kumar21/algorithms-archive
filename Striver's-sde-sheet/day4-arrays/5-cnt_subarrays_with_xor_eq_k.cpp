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

    vi nums = {4, 2, 2, 6, 4};
    int k=6;

    unordered_map<int, int> mp;
    int xr=0;
    mp[xr]++;
    int res=0;

    for (int i=0; i<sz(nums); i++) {
        xr ^= nums[i];

        int x = xr ^ k;
        res += mp[x];
        mp[x]++;
    }

    cout << res;


    return 0;
}
