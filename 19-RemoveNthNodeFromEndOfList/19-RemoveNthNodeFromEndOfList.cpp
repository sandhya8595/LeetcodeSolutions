// Last updated: 24/03/2026, 14:31:12
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    // two traversal  gap techniqu used here
        
    
    ListNode* dummy= new ListNode(0);
     ListNode* p = dummy;
      ListNode* q=dummy;
      dummy->next=head;

     //traverse the all node 
      for(int i=0;i<n;i++){
        p = p->next;
      }
       while(p->next!=NULL){
        p=p->next;
        q= q->next;
       }
     q->next= q->next->next;
     return dummy->next;
    }
};