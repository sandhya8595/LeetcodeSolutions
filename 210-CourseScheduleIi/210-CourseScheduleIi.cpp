// Last updated: 28/04/2026, 20:14:35
class Solution {
public:
    
    bool dfs(int node, vector<vector<int>>& adj, vector<bool>& vis, vector<bool>& recPath) {
        vis[node] = true;
        recPath[node] = true;

        for (int neigh : adj[node]) {
            if (!vis[neigh]) { // agr neig visited nhi hai to
                if (dfs(neigh, adj, vis, recPath))
                    return true;
            }
            else if (recPath[neigh]) { // this is the backedge condition 
                return true; // cycle found
            }
        }

        recPath[node] = false;
        return false;
    }

    void topoDFS(int node, vector<vector<int>>& adj, vector<bool>& vis, stack<int>& st) {
        vis[node] = true;

        for (int neigh : adj[node]) {
            if (!vis[neigh]) {   
                topoDFS(neigh, adj, vis, st);
            }
        }

        st.push(node); // push after visiting all neighbors
    }

    vector<int> findOrder(int n, vector<vector<int>>& edges) {

        vector<vector<int>> adj(n);

        // build graph
        for (auto &e : edges) {
            adj[e[1]].push_back(e[0]);
        }

        vector<bool> vis(n, false), recPath(n, false);

        // cycle detection
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                if (dfs(i, adj, vis, recPath))
                    return {}; // cycle → no answer
            }
        }

        // topo sort
        stack<int> st;
        vis.assign(n, false);

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                topoDFS(i, adj, vis, st);
            }
        }

        vector<int> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
    }
};