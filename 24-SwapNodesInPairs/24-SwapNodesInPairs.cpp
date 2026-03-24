// Last updated: 24/03/2026, 14:31:08
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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
         ListNode* first = head;
          ListNode* second= head->next; 
          ListNode* pre= NULL;
          while(first!=NULL && second!=NULL){
           ListNode* third = second->next;
           second->next=first;
            first->next= third;
            if(pre!=NULL){
              pre->next=second;
              }else{
              head =second;
            }
            //update the linked list
             pre= first;
             first=third;
            if(third!=NULL){
             second=third->next;
            }
            else{
                third= NULL;
            }
          }
          return head;
    } 
};