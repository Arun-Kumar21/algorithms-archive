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

// Use formulas for sum of first n natural numbers and sum of their squares.

int main() {
    FAST_IO;

    vi arr = {3,1,2,5,3};

    int n = sz(arr);

    ll originalSum = n * (n+1)/2;
    ll curSum = accumulate(all(arr), 0);

    ll originalSquareSum = n * (n+1) * (2*n+1) / 6;
    ll curSquareSum = 0;

    
    for (int i=0; i<n; i++) {
        curSquareSum += pow(arr[i], 2);
    }
    
    ll p = curSum - originalSum;
    ll q = curSquareSum - originalSquareSum;
    
    q = q/p;

    ll r = (p+q)/2;
    ll m = r - p;

    cout << m << " " << r;

    return 0;
}