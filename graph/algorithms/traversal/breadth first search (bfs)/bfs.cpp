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

void bfs (vector<vi> &adj, vector<bool> &vis, int V, vi &res, int root) {
    queue<int> q;
    q.push(root);

    while (!q.empty()) {
        int it = q.front();
        q.pop();

        res.pb(it);

        for (auto nei: adj[it]) {
            if (!vis[nei]){ 
                q.push(nei);
                vis[nei] = true;
            }
        }
    }
}


int main() {
    FAST_IO;

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
    vector<int> res;

    bfs(adj, vis, V, res, 0);

    for (int it: res) {
        cout << it << " ";
    }

    return 0;
}