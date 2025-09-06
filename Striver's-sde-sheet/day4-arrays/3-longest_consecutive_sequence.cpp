#include <bits/stdc++.h>
#include <unordered_set>
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
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

        for (auto n : nums) st.insert(n);

        int ls = 0;

        for (auto e : st) {
            if (st.find(e - 1) != st.end()) continue;

            int cl = 1;
            while (st.find(e + 1) != st.end()) {
                e++;
                cl++;
            }

            ls = max(ls, cl);
        }

        return ls;
    }
};
