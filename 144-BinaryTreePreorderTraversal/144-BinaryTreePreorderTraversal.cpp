// Last updated: 24/03/2026, 14:30:14
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
void preorder(TreeNode* root , vector<int> &result) {
        //base condition
        if(!root){
            return;
        }
         //node
        result.push_back(root->val); 

       //left
       preorder(root->left,result); 

        //right
        preorder(root->right,result); 
    }
    vector<int> preorderTraversal(TreeNode* root) {
       vector<int>result;
       preorder(root,result);
       return result; 
    }
};