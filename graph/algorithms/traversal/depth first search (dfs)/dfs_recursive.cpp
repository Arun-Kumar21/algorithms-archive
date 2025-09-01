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

void dfs (vector<vi> &adj, vector<bool> &vis, int V, int i, vi &res) {
    if (vis[i] || i >= V)  {
        return;
    }

    vis[i] = true;
    res.pb(i);

    for (auto& nei: adj[i]) {
        dfs(adj, vis, V, nei, res);
    }
}


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


    vector<bool> vis(V, false);
    vi res;

    dfs(adj, vis, V, 0, res);

    for (int node : res) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}