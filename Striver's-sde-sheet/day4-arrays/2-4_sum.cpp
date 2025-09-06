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
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(all(nums));
        int n = sz(nums);

        vector<vi> res;

        for (int i=0; i<n; i++){
            if (i> 0 && nums[i] == nums[i-1]) continue;

            for (int j=i+1; j<n; j++) {
                if (j>i+1 && nums[j] == nums[j-1]) continue;

                int l=j+1, r=n-1;

                while (l<r) {
                    ll sum = (ll)nums[i] + nums[j] + nums[l] + nums[r];

                    if (sum == target) {
                        res.pb({nums[i], nums[j], nums[l], nums[r]});

                        while (l<r && nums[l] == nums[l+1]) l++;
                        while (l<r && nums[r] == nums[r-1]) r--;

                        l++;
                        r--;
                    }

                    else if (sum < target) l++;
                    else r--;
                }
            }
        }

        return res;
    }
};
