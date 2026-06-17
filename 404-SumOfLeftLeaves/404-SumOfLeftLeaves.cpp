// Last updated: 17/06/2026, 22:16:42
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
    int leafSolve(TreeNode* root, bool isLeft) {
        if (root == NULL) return 0;

        // Leaf node
        if (root->left == NULL && root->right == NULL) {
            return isLeft ? root->val : 0;
        }

        return leafSolve(root->left, true) +
               leafSolve(root->right, false);
    }

    int sumOfLeftLeaves(TreeNode* root) {
        return leafSolve(root, false);
    }
};