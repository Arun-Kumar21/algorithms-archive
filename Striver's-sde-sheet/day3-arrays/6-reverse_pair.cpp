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
    int mergeSort(vi &nums, int l, int h) {
        if (l >= h) return 0;
        int res = 0;
        int mid = l + (h - l) / 2;

        res += mergeSort(nums, l, mid);
        res += mergeSort(nums, mid + 1, h);
        res += merge(nums, l, mid, h);

        return res;
    }

    int merge(vi &nums, int l, int mid, int h) {
        int res = 0;
        vi t;
        int j = mid + 1;

        // count reverse pairs
        for (int i = l; i <= mid; i++) {
            while (j <= h && (ll)nums[i] > 2LL * nums[j]) {
                j++;
            }
            res += j - (mid + 1);
        }

        // merge two sorted halves
        int i = l;
        j = mid + 1;

        while (i <= mid && j <= h) {
            if (nums[i] <= nums[j]) {
                t.pb(nums[i++]);
            } else {
                t.pb(nums[j++]);
            }
        }

        while (i <= mid) t.pb(nums[i++]);
        while (j <= h) t.pb(nums[j++]);

        for (int i = l; i <= h; i++) {
            nums[i] = t[i - l];
        }

        return res;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, sz(nums) - 1);
    }
};
