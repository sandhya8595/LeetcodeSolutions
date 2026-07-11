// Last updated: 11/07/2026, 21:38:11
class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> dead(deadends.begin(), deadends.end());

        unordered_map<string, int> dist;
        string start = "0000";

        if (dead.count(start))
            return -1;

        queue<string> q;
        q.push(start);
        dist[start] = 0;

        while (!q.empty()) {
            string cur = q.front();
            q.pop();

            int d = dist[cur];

            if (cur == target)
                return d;

            // Generate all 8 possible neighbors
            for (int i = 0; i < 4; i++) {
                char original = cur[i];

                for (int move = -1; move <= 1; move += 2) {

                    int val = original - '0';
                    //this is codition for up and down rotation...

                    int nextVal = (move == 1) ? ((val == 9) ? 0 : val + 1): ((val == 0) ? 9 : val - 1);

                    cur[i] = nextVal + '0';
                    string nxt = cur;
//to check str is dedend or visited or not
                    if (!dead.count(nxt) && dist.find(nxt) == dist.end()) {
                        dist[nxt] = d + 1;
                        q.push(nxt);
                    }

                    cur[i] = original; // Restore original digit
                }
            }
        }

        return -1;
    }
};