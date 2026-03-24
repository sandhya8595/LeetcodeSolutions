// Last updated: 24/03/2026, 14:29:55
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
    ListNode* removeElements(ListNode* head, int val) {
      
        // base condition
        if(head==NULL){
            return head;
        }
        while(head!=NULL &&  head->val== val){
            head=head->next;

           }
           ListNode* curr= head;
           ListNode* prev=NULL;

         // when node value given  in front(means head value is same to the checking vakue )
         while(curr!=NULL){
            if(curr->val==val){            // 6,1,3
                prev->next=curr->next;
                curr=prev->next;
               
            }
             else{
                prev= curr;//pre act s like tailling pointer
               curr=curr->next;
           }
            
         }
        
         return head;
    }
};