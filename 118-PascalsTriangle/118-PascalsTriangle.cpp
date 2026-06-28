// Last updated: 28/06/2026, 19:47:04
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle(numRows);

        for (int i = 0; i < numRows; i++) {
            // Har row ka size i+1 hoga
            triangle[i].resize(i + 1);

            // Pehla aur last element hamesha 1
            triangle[i][0] = triangle[i][i] = 1;

            // Beech ke elements calculate karna
            for (int j = 1; j < i; j++) {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }

        return triangle;
    }
};
