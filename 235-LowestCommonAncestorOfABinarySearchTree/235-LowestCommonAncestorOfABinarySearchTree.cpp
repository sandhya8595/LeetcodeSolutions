// Last updated: 05/04/2026, 11:48:04
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }
        //FOR LEFT 
        if(root->val > p->val  && root->val > q->val){
            return lowestCommonAncestor(root->left,p,q);
        } //FOR RIGHT 
        else if(root->val < p->val  && root->val < q->val){
            return lowestCommonAncestor(root->right,p,q);
        }
        else{
        return root;
        }   // if node  itself ancestor then simply return roo
    }
};