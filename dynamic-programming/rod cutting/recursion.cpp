#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define debug(x) cerr << #x << " = " << x << '\n';

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;


int cutRod (vi &P, int n) {
    if (n == 0) return 0;

    int q = INT_MIN;

    for (int i = 1; i <= n; i++) {
        q = max(q, P[i-1] + cutRod(P, n - i));
    }

    return q;
}


int main() {
    FAST_IO;

    vi P = {1, 5, 8, 9, 10, 17, 17, 20, 24, 30};

    cout << cutRod(P, 4);

    return 0;
}