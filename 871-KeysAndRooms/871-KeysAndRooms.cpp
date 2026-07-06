// Last updated: 06/07/2026, 21:38:17

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        if (n == 0) return true;

        vector<bool> visited(n, false); 
        queue<int> q;

        q.push(0);
        visited[0] = true;
        int count = 0;

        while (!q.empty()) {
            int r = q.front();
            q.pop();
            count++;
//to check room is visted or not ...
            for (int key : rooms[r]) {
                if (!visited[key]) {
                    visited[key] = true;
                    q.push(key);
                }
            }
        }

        return count == n;
    }
};

 //how to analys that it is grapg question... in this question  ....output is bsed on connections....
