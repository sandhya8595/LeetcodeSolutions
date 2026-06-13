// Last updated: 13/06/2026, 22:05:26
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
    bool evaluateTree(TreeNode* root) {
        //BASE CONDITION 
       if(!root->left && !root->right)
       return root->val;

    //for OR node
     if (root->val == 2) { //OR  operation ke liye 2 use hota hai
            return evaluateTree(root->left) || evaluateTree(root->right);
        }

    // AND node
        return evaluateTree(root->left) && evaluateTree(root->right);
    
    }
};

// if(TreeNode* root == "OR") here we can not campare pointer and string so this is invalid
//0 → false
// 1 → true
// 2 → OR operation
// 3 → AND operation