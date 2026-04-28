// Last updated: 28/04/2026, 20:14:38
class Solution {
public:
    // DFS function using recursion stack
    bool dfs(int node, vector<vector<int>> &adj, vector<bool> &vis, vector<bool> &recPath) {
        
        vis[node] = true;        // visited ko mark kr denge 
        recPath[node] = true;    // push into recursion stack
        // visit all neighbors
        for (int neigh : adj[node]) {
            
            if (!vis[neigh]) {
                if (dfs(neigh, adj, vis, recPath))
                    return true;
            }
            else if (recPath[neigh]) {
                // cycle found
                return true;
            }
        }
        
        recPath[node] = false;   // pop from stack
        return false;
    }
    
    
    bool canFinish(int n, vector<vector<int>>& edges) {
        
        //Build adjacency list
        vector<vector<int>> adj(n);
        for (auto &e : edges) {
            adj[e[1]].push_back(e[0]);
        }
        
        //  Initialize arrays
        vector<bool> vis(n, false);
        vector<bool> recPath(n, false);
        
       // DFS k all components
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                if (dfs(i, adj, vis, recPath))
                    return false;
            }
        }
        
        return true;
    }
};