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


void dfs (vector<vi> &adj, vector<bool> &vis, int V, vi &res, int root) {
    stack<int> st;
    st.push(root);

    while (!st.empty()) {
        int it = st.top();
        st.pop();

        res.pb(it);
        vis[it] = true;

        for (int nei: adj[it]) {
            if (!vis[nei]) st.push(nei);
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

    dfs(adj, vis, V, res, 0);

    for (int it: res) {
        cout << it << " ";
    }

    return 0;
}