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
    int maxProfit(vector<int>& prices) {
        int res=0;
        int b = 0;

        for (int i=1; i<sz(prices); i++) {
            res = max(res, prices[i] - prices[b]);
            if (prices[b] > prices[i]) b = i;
        }

        return res;
    }
};
