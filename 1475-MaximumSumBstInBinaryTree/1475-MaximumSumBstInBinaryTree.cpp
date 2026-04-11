// Last updated: 11/04/2026, 17:54:16
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */

// class Box{
//      public:
//       bool BST;
//       int sum;
//       int min,max;
      
//       // now create a constructor
//        Box(int data){
//            BST=true;
//            sum=data;
//            min=data;
//            max=data;
//        }
//  };

// class Solution {
//   public:
//  //to find the fxn
//    Box *find(TreeNode *root, int &Totalsum){
//     if(root == NULL) return NULL;
//      //leaft node exist
//      if(!root->left&&!root->right){
//          Totalsum=max(Totalsum,root->val);
//          return new Box(root->val);
//      }
//      //only right node exist
//       else if(root->right && !root->left){
//           Box *head=find(root->right,Totalsum);
          
//           //bst yes or not
//           if(head->BST && head->min > root->val){
//               head->sum++;
//               head->min=root->val;
//               Totalsum=max(Totalsum,head->sum);
//               return head;
//           }
//           else{
//               head->BST=0;
//               return head;
//           }
         
//      }
     
//      // only left node exist
//      else if(root->left && !root->right){
//           Box *head=find(root->left,Totalsum);
          
//           //bst yes or no
//           if(head->BST && head->max < root->val){
//                head->sum+=root->val;
//               head->max=root->val;
//               Totalsum=max(Totalsum,head->sum);
//               return head;
//           }
//           else{
//               head->BST=0;
//               return head;
//           }
//      } 
     
//      //both node exist
//      else{
//          Box *Lefthead=find(root->left,Totalsum);
//          Box *Righthead=find(root->right,Totalsum);
         
//          if((!Lefthead || Lefthead->BST) &&
//            (!Righthead || Righthead->BST) &&
//            (!Lefthead || Lefthead->max < root->val) &&
//            (!Righthead || Righthead->min > root->val)){

//               Box *head= new Box(root->val);

//               if(Lefthead){
//                 head->sum += Lefthead->sum;
//                 head->min = Lefthead->min;
//             }

//             if(Righthead){
//                 head->sum += Righthead->sum;
//                 head->max = Righthead->max;
//             }

//             Totalsum = max(Totalsum, head->sum);
//             return head;
//         }

//         // not BST
//         Box *head = new Box(root->val);
//         head->BST = false;
//         return head;
//     }


//     int maxSumBST(TreeNode* root) {
//      int Totalsum=0;
//         find(root,Totalsum);
//         return Totalsum;   
//     }
// };
class Box{
public:
    bool BST;
    int sum;
    int min, max;

    Box(int data){
        BST = true;
        sum = data;
        min = data;
        max = data;
    }
};

class Solution {
public:

    Box* find(TreeNode* root, int &Totalsum){

        if(root == NULL) return NULL;

        // leaf node
        if(!root->left && !root->right){
            Totalsum = max(Totalsum, root->val);
            return new Box(root->val);
        }

        Box *Lefthead = find(root->left, Totalsum);
        Box *Righthead = find(root->right, Totalsum);

        if((!Lefthead || Lefthead->BST) &&
           (!Righthead || Righthead->BST) &&
           (!Lefthead || Lefthead->max < root->val) &&
           (!Righthead || Righthead->min > root->val)){

            Box *head = new Box(root->val);

            if(Lefthead){
                head->sum += Lefthead->sum;
                head->min = Lefthead->min;
            }

            if(Righthead){
                head->sum += Righthead->sum;
                head->max = Righthead->max;
            }

            Totalsum = max(Totalsum, head->sum);
            return head;
        }

        // not BST
        Box *head = new Box(root->val);
        head->BST = false;
        return head;
    }

    int maxSumBST(TreeNode* root) {
        int Totalsum = 0;
        find(root, Totalsum);
        return Totalsum;
    }
};