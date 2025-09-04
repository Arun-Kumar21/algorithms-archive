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
    double myPow(double x, int n) {
        if (n == 0) return 1;

        long long p = n;
        if (p < 0) p = -p;
        double res=1.0;
        while(p>0) {
            if(p%2) {
                res *= x;
                p--;
            } else {
                x*=x;
                p/=2;
            }
        }

        if (n<0) {
            return 1.0/res;
        }
        return res;
    }
};
