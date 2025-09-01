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


int main() {
    FAST_IO;

    // Graph representation with adjacency matrix;

    // vertices
    int n = 5;

    vector<vector<int>> adjMatrix(n, vector<int>(n, 0));

    // Edges
    adjMatrix[0][1] = 1;
    adjMatrix[1][0] = 1;
    adjMatrix[1][2] = 1;
    adjMatrix[2][1] = 1;
    adjMatrix[3][4] = 1;
    adjMatrix[4][3] = 1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << '\n';
    }


    return 0;
}