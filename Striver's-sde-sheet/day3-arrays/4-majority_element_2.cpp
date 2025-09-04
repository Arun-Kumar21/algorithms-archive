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
    vector<int> majorityElement(vector<int>& nums) {
        int n1 = -1, n2 = -1;
        int f1 = 0, f2 = 0;

        for (int num : nums) {
            if (num == n1) {
                f1++;
            } else if (num == n2) {
                f2++;
            } else if (f1 == 0) {
                n1 = num;
                f1 = 1;
            } else if (f2 == 0) {
                n2 = num;
                f2 = 1;
            } else {
                f1--;
                f2--;
            }
        }

        f1 = 0;
        f2 = 0;
        for (int num : nums) {
            if (num == n1) f1++;
            else if (num == n2) f2++;
        }

        vector<int> res;
        int n = nums.size();
        if (f1 > n / 3) res.push_back(n1);
        if (f2 > n / 3) res.push_back(n2);

        return res;
    }
};

