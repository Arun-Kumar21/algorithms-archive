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
    int majorityElement(vector<int>& nums) {
        int n=-1;
        int f=0;

        for (int i=0; i<nums.size(); i++) {
            if (n == -1) {
                n = nums[i];
                f = 1;
            } else if (n == nums[i]) {
                f ++;
            } else {
                f--;
                if (f == 0) {n = nums[i]; f=1;};
            }
        }

        return n;
    }
};
