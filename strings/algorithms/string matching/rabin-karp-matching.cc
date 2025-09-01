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

void rabinKarpMatcher (const string& T, const string& P, int d, int q) {
    int n = sz(T), m = sz(P);

    int h = 1;
    for (int i = 0; i < m - 1; i++)
        h = (h * d) % q;  // h = d^(m-1) % q

    int patternHash = 0;
    int subStringHash = 0;

    // initial hash for pattern and first window
    for (int i = 0; i < m; i++) {
        patternHash   = (d * patternHash + P[i]) % q;
        subStringHash = (d * subStringHash + T[i]) % q;
    }

    for (int s = 0; s <= n - m; s++) {
        // If hash values match, check actual substring
        if (patternHash == subStringHash) {
            if (T.substr(s, m) == P) {
                cout << "Pattern occurs at shift " << s << "\n";
            }
        }

        // Compute hash for next window
        if (s < n - m) {
            subStringHash = (d * (subStringHash - T[s] * h) + T[s + m]) % q;

            if (subStringHash < 0) 
                subStringHash += q;
        }
    }
}

int main() {
    FAST_IO;

    string T = "ababaabab";
    string P = "abab";

    rabinKarpMatcher(T, P, 10, 2);
    

    return 0;
}