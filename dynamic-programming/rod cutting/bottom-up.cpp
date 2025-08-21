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

int BOTTOM_UP_CUT_ROD(vi &P, int n) {
    vi R(n + 1, -1);
    R[0] = 0;
    
    for (int j = 1; j <= n; j++) {
        int q = -1;
        for (int i = 1; i <= j; i++) {
            q = max(q, P[i - 1] + R[j - i]);
        }
        R[j] = q;
    }

    return R[n];
}


int main() {
    FAST_IO;

    vi P = {1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
    cout << BOTTOM_UP_CUT_ROD(P, 4);

    return 0;
}