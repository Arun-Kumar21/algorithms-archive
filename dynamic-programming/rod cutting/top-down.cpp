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


int MEMORIZED_CUT_ROD_AUX(vi &P, int n, vi &R) {
    if (R[n] > 0) return R[n];

    int q;

    if (n == 0) q = 0;
    else q = INT_MIN;

    for (int i=1; i<=n; i++) {
        q = max(q, P[i-1] + MEMORIZED_CUT_ROD_AUX(P, n-i, R));
    }

    R[n] = q;
    return q;
}

int MEMORIZED_CUT_ROD (vi &P, int n) {
    vi R(n, -1);

    return MEMORIZED_CUT_ROD_AUX(P, n, R);
}


int main() {
    FAST_IO;

    vi P = {1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
    cout << MEMORIZED_CUT_ROD(P, 4);

    return 0;
}