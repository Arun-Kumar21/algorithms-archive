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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // binary search in 2d array

        int m=sz(matrix), n=sz(matrix[0]);
        int l=0, h=m*n-1;

        while (l<=h) {
            int mid = l + (h-l)/2;

            int r = mid/n;
            int c = mid%n;

            if (matrix[r][c] == target) return true;
            else if (matrix[r][c] < target) {
                l=mid+1;
            } else h = mid-1;
        }

        return false;
    }
};
