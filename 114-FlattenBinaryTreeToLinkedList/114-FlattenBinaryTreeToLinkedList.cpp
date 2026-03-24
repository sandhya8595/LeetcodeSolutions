// Last updated: 24/03/2026, 14:30:26
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
     TreeNode* nextRight=NULL;
    void flatten(TreeNode* root) {
        if(root==NULL)
        return;
       //use reverse preorder traversal
         flatten(root->right);
         flatten(root->left);
          root->left=NULL;
          root->right=nextRight; // NR is last visited node 
          nextRight=root;
    }
};