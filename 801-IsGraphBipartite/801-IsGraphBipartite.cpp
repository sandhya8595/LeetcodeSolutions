// Last updated: 07/07/2026, 12:25:46
class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        queue<int> q;
        int n = graph.size();
        vector<int> color(n, -1);

        for (int i = 0; i < n; ++i) {
            if (color[i] != -1) continue;   // already visited

            color[i] = 0;
            q.push(i);

            while (!q.empty()) {
                int node = q.front();
                q.pop();

                for (int v : graph[node]) {
                    if (color[v] == -1) {
                        color[v] = 1 - color[node];
                        q.push(v);
                    } else if (color[v] == color[node]) {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};

// if two adjacency node is same then  it is not Bipartite garphh 
 // simple:- if even node then bipartite ... if odd then not biparatite
