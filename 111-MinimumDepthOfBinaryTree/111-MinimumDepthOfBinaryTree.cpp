// Last updated: 24/03/2026, 14:30:27
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
    int minDepth(TreeNode* root) {
         //base condition 1
        if(!root)
        return 0;

        // root ka left exist nhi  krta then find from right node
         if(!root->left)
         return 1+minDepth(root->right);

       // root ka right exist nhi  krta then find from left  node
         if(!root->right)
          return  1+minDepth(root->left);

            return 1+min(minDepth(root->left),minDepth(root->right));
    }
};