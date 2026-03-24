// Last updated: 24/03/2026, 14:29:42
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        //base condition
        if(head==NULL || head->next==NULL)
        return true;
      
 
     //to find the middle of the linked lis
        ListNode*slow= head;
        ListNode* fast = head;
       
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

       // now reverse the half of linked list 
                ListNode* curr= slow;
                ListNode*  pre= NULL;
                ListNode*  next= NULL;
                
                while(curr!=NULL){
                    next=curr->next;
                    curr->next=pre;
                    pre=curr;
                    curr=next;
                }
            
            // now again revers the linked list to restore(sothat the   elemnt order will be changed )
               //  Compare both halves
            ListNode* left = head;
            ListNode* right = pre;

            
             while(right!=NULL){
                if(left->val!= right->val){
                    return false;
                }
                    left=left->next;
                    right=right->next;
                
             }     
        return true;
    }
};