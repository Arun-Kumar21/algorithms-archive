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
    void sortColors(vector<int>& nums) {
        int l=0, m=0, h=sz(nums)-1;

        while (m<=h) {
            if (nums[m]==2) {
                swap(nums[m], nums[h]);
                h--;
            } else if (nums[m] == 0) {
                swap(nums[l], nums[m]);
                m++;
                l++;
            } else m++;
        }
    }
};
