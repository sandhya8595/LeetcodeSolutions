// Last updated: 16/06/2026, 12:32:51
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

 //DFS traversal(recursion used here)
class Solution {
public:
   int D=0;
   int height(TreeNode* root){
      if(!root) return 0;

    int leftHt=height(root->left);
    int rightHt=height(root->right);

    D=max(D,leftHt+rightHt);

    return 1+max(leftHt,rightHt);

   }
    int diameterOfBinaryTree(TreeNode* root) {
        //base condition 
        height(root);
    return D;
    }
};