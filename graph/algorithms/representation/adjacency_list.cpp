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

    // Vertices
    int V = 5;

    vector<vi> adj(V);

    // Edges
    adj[0].pb(1);
    adj[0].pb(4);
    adj[1].pb(2);
    adj[1].pb(3);
    adj[1].pb(4);
    adj[2].pb(3);
    adj[3].pb(4);

    for (int i = 0; i < V; ++i) {
        cout << "Vertex " << i << ": ";
        for (int j : adj[i]) {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}