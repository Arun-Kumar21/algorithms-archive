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
    void nextPermutation(vector<int>& nums) {
        int n = sz(nums);        
        int f=-1;
        
        for (int i=n-2; i>=0; i--) {
            if (nums[i] < nums[i+1]) {
                f = i;
                break;
            }
        }

        if (f==-1) {
            reverse(all(nums));
            return;
        }

        for (int i=n-1;i>f; i--) {
            if (nums[i] > nums[f]) {
                swap(nums[f], nums[i]);
                break;
            }
        }


        reverse(nums.begin()+f+1, nums.end());
        return;
    }
};

