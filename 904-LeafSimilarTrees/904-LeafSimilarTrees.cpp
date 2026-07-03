// Last updated: 03/07/2026, 15:50:05
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
//dfs
    void findLeaves(TreeNode* root, vector<int>& leaves) {
        if (root == NULL)
            return;

        // If it is a leaf node then push
        if (root->left == NULL && root->right == NULL) {
            leaves.push_back(root->val);
            return;
        }

        findLeaves(root->left, leaves);
        findLeaves(root->right, leaves);
    }


    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaf1;
        vector<int> leaf2;

        findLeaves(root1, leaf1);
        findLeaves(root2, leaf2);

        return leaf1 == leaf2;
    }
};
//why u chose dfs ....not bfs:- Because DFS visits the left subtree before the right subtree, so the leaf nodes are stored in the required left-to-right order."

//"BFS would also work, but DFS is simpler here because recursion makes it easy to visit every leaf in left-to-right order without using an extra queue."