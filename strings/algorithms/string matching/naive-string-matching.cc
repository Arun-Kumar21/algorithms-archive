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


void naiveStringMatching (const string& T, const string& P) {
    int n = sz(T), m = sz(P);

    for (int s=0; s<=n-m; s++) {
        int j=0;

        while (j<m && T[s+j] == P[j]) {
            j++;
        }

        if (j == m) cout << "Pattern occurs at shift " << s << endl;
    }
}

int main() {
    FAST_IO;

    string T = "ababaabab";
    string P = "abab";

    naiveStringMatching(T, P);

    return 0;
}