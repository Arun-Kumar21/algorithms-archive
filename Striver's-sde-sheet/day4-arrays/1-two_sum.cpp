#include <bits/stdc++.h>
#include <unordered_map>
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
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i=0; i<sz(nums); i++) {
            int rq = target - nums[i];
            auto it = mp.find(rq);
            if (it != mp.end()) return {i, it->second};

            else mp[nums[i]] = i;
        }

        return {};
    }
};
