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


class Solution {
public:
    // Take transpose and then swap i'th with n-i'th column
    void rotate(vector<vector<int>>& matrix) {

        int n = sz(matrix);

        //transpose
        for (int r = 0; r < n; r++) {
            for (int c = r + 1; c < n; c++) {
                swap(matrix[r][c], matrix[c][r]);
            }
        }

        // column swap
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n / 2; c++) {
                swap(matrix[r][c], matrix[r][n - 1 - c]);
            }
        }
    }
};

