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


int merge(vector<int>& arr, int l, int mid, int h) {
    vector<int> t;
    int i = l, j = mid + 1;
    int inv = 0;

    while (i <= mid && j <= h) {
        if (arr[i] <= arr[j]) {
            t.pb(arr[i]);
            i++;
        } else {
            t.pb(arr[j]);
            inv += (mid - i + 1); 
            j++;
        }
    }

    while (i <= mid) {
        t.pb(arr[i]);
        i++;
    }

    while (j <= h) {
        t.pb(arr[j]);
        j++;
    }

    for (int k = l; k <= h; k++) {
        arr[k] = t[k - l];
    }

    return inv;
}

int mergeSort(vector<int>& arr, int l, int h) {
    int inv = 0;
    if (l >= h) return inv;
    int mid = l + (h - l) / 2;
    inv += mergeSort(arr, l, mid);
    inv += mergeSort(arr, mid + 1, h);
    inv += merge(arr, l, mid, h);
    return inv;
}

int main() {
    FAST_IO;

    vi arr = {5, 4, 3, 2, 1};
    int inv = mergeSort(arr, 0, 4);

    cout << inv;

    return 0;
}   