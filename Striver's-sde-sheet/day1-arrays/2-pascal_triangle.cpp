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
    vector<vector<int>> generate(int numRows) {
        vector<vi> res;       
        res.pb({1});
        
        for (int i=1; i<numRows; i++) {
            vi vec(i+1, 0);
            vec[0] = 1;
            vec[i] = 1;

            for (int j=1; j<i; j++) {
                vec[j] = res[i-1][j-1] + res[i-1][j];
            }

            res.pb(vec);
        }

        return res;
    }

};
