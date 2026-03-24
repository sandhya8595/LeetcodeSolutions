// Last updated: 24/03/2026, 14:30:24
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        // this is base condition
        //if root  nahi exist krega then we simply return  null
        if(!root){
           return NULL;
       } 
        queue<Node*>q;
        q.push(root); // push the root node in q
        
       while(!q.empty()){ 
           int n=q.size();
           Node* pre=NULL;
           
           for(int i=0;i<n;i++){
               Node*curr=q.front();
            q.pop();
            if(pre)
              pre->next=curr;
              pre= curr;
           
     if(curr->left) //if left node exist then  insert otherwise return the root 
       q.push(curr->left);
         
     if(curr->right)
       q.push(curr->right);
         
       }
    }
        return root;
        }
};