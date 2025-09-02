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
    int maxSubArray(vector<int>& nums) {
        int curSum=0;
        int res = INT_MIN;

        for (int i=0; i<sz(nums); i++) {
            curSum += nums[i];
            res = max(res, curSum);

            if (curSum<0) curSum = 0;
        }

        return  res; 
    }
};
