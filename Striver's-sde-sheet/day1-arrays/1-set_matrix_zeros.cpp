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
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> rowSet;
        unordered_set<int> colSet;

        int m = sz(matrix);
        int n = sz(matrix[0]);

        for (int r=0; r<m; r++) {
            for (int c=0; c<n; c++) {
                if (matrix[r][c] == 0) {
                    rowSet.insert(r);
                    colSet.insert(c);
                }
            }
        }
        
        for (auto r: rowSet) {
            for (int c=0; c<n; c++) {
                matrix[r][c] = 0;
            }
        }

        for (auto c: colSet) {
            for (int r=0; r<m; r++) {
                matrix[r][c] = 0;
            }
        }
    }
};

