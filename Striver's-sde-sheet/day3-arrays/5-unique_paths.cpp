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


// Use Permutation and Combination
/*
class Solution {
public:
    int mod = 2 * pow(10, 9);

    int fact (int n) {
        if (n == 1 || n == 0) return 1;

        return n * fact(n-1);
    }

    int uniquePaths(int m, int n) {

        int N = (m-1)+(n-1);    // m-1 down steps and n-1 right steps to reach dest
        int K = (n-1);          // select n-1 down steps or m-1 ways

        return (fact(N) / (fact(K) * fact(N-K))) % mod;
    }
};
*/

class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = m + n - 2; // total moves
        int K = min(m - 1, n - 1);

        // rather then computing fact for all terms, use it's expansion form
        long long result = 1;
        for (int i = 1; i <= K; i++) {
            result = result * (N - K + i) / i;
        }

        return (int)result;
    }
};
