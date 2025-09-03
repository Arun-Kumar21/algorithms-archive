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
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(all(intervals));

        vector<vi> res;
        if (intervals.empty()) return res;

        res.pb(intervals[0]);
        for (int i = 1; i < sz(intervals); i++) {
            if (res.back()[1] >= intervals[i][0]) {
                res.back()[1] = max(res.back()[1], intervals[i][1]);
            } else {
                res.pb(intervals[i]);
            }
        }

        return res;
    }
};

