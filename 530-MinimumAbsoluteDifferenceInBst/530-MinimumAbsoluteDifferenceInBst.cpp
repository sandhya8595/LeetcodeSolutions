// Last updated: 04/07/2026, 15:57:50
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
        int prev=-1;
        int ans = INT_MAX;
     void inorder(TreeNode* root){
        //base condition
        if(root==NULL) return;
         //left
         inorder(root->left);

         if(prev!=-1){
            ans = min(ans,root->val-prev);
         }
         prev=root->val;
         //right
         inorder(root->right);
     }

    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        return ans;
    }
};