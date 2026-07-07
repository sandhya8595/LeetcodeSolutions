// Last updated: 07/07/2026, 22:16:26
class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        // Build adjacency list
        vector<vector<int>> graph(n + 1);
        for (auto& edge : dislikes) {
            int u = edge[0];
            int v = edge[1];
            graph[u].push_back(v); //isme aise logo jo u ko dislike krte hai
            graph[v].push_back(u);
        }

        vector<int> color(n + 1, 0);//vector size,n+1
        queue<int> q;

        
        for (int i = 1; i <= n; ++i) {
            if (color[i] != 0) continue;  // already visited

            color[i] = 1;  // start with group A
            q.push(i);

            while (!q.empty()) {
                int node = q.front();
                q.pop();

                for (int v : graph[node]) {
                    if (color[v] == 0) {
                        color[v] = -color[node]; // opposite group
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


//0 = color nahi diya (unvisited).

// 1 = group A.

// -1 = group B.

//algo

// node = q.front() lo.
// node ke saare neighbors v dekho:
// Agar color[v] == 0:
// color[v] = -color[node] (opposite group).
// v ko queue mein daalo.
// Agar color[v] == color[node]:
// Matlab dono dislike karne wale same group mein → possible nahi.
// false return karo.
// Saare components check karo → agar koi contradiction nahi mili → true.