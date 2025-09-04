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
    int findClosest(int x, int y, int z) {
        int zxdist = abs(z-x);
        int zydist = abs(z-y);

        if (zxdist > zydist) {
            return 2;
        } else if (zxdist < zydist) {
            return 1;
        } else return 0;
    }
};
