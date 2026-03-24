// Last updated: 24/03/2026, 14:30:34
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;

      

        while(root!=NULL){ 
            if(root->left == NULL){
                ans.push_back(root->val);
                root=root->right;
            }
            else{
                //root ka left nul nhi hai to find ip
                TreeNode* IP=root->left;
                while(IP->right !=NULL && IP->right!=root){
                    IP= IP->right;
                }
                if(IP->right==NULL){// predecessor ka right null hai to  connection form krenge                  
                    IP->right=root;
                    root=root->left;
                }
                else{
                    IP->right=NULL; //DEMOLISH THE THREAD
                    ans.push_back(root->val);
                    root=root->right;
                }

            }
        }

        return ans;  
    }
};