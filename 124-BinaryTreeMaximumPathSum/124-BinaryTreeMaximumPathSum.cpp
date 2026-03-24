// Last updated: 24/03/2026, 21:43:24
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
    int maxPathSum(TreeNode* root) {
       int maxi=INT_MIN; // to store the value
       maximumPath(root,maxi);
       return maxi;

    }
    int maximumPath(TreeNode* node, int &maxi){
        //if node is null then simply return
        if(node==NULL) return 0;
        int left=max(0,maximumPath(node->left,maxi));
        int right=max(0,maximumPath(node->right,maxi));
        maxi= max(maxi,left + right + node->val);

        return max(left,right)+node->val; //left and right me jo value bdi hogi usko nodese add krke return kr denge  
    }
};
// this is used backtracking logic(umbrella based stru.) we dont consider sum of negatuve node 