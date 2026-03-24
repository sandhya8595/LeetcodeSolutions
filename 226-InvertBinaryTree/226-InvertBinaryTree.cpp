// Last updated: 24/03/2026, 14:29:45
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
    TreeNode* invertTree(TreeNode* root) {
         if(root==NULL)//base condition
         return NULL;
          
        //swap the left and right node using temp 
            TreeNode* temp=root->left;
            root->left=root->right;
            root->right=temp;
        
          //invert the subtree 
          invertTree(root->left);
          invertTree(root->right);
          return root;
    }
};
// in this code we can not swap the right node  to left node directly because  node will be overwrite and lost the data. so using third temp node swap that node with each other