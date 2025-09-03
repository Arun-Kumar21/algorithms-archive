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
    int findDuplicate(vector<int>& nums) {
        // Floyd's Tortoise and Hare (Cycle Detection) algorithm:
        // Treat the array as a linked list where each index points to nums[index].
        // Since there is one duplicate, there must be a cycle.
        // The first phase finds the intersection point inside the cycle.
        int toto = nums[0];
        int hare = nums[0];

        do {
            toto = nums[toto];         // moves one step
            hare = nums[nums[hare]];   // moves two steps
        } while (toto != hare);

        // Second phase: Find the entrance to the cycle (duplicate number).
        toto = nums[0];
        while (toto != hare) {
            toto = nums[toto];
            hare = nums[hare];
        }
        return toto;
    }
};
