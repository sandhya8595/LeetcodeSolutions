// Last updated: 24/03/2026, 14:30:13
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
 void postorder(TreeNode* root , vector<int> &result) {
        //base condition
        if(!root){
            return;
        } 
       //left
       postorder(root->left,result); 

        //right
        postorder(root->right,result); 

          //node
        result.push_back(root->val);
    }  
    vector<int> postorderTraversal(TreeNode* root) {
      vector<int>result;
      postorder(root,result);
      return result;
    }
};