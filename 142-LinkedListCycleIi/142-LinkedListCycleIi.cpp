// Last updated: 24/03/2026, 14:30:16
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*slow= head;
        ListNode*fast= head;
      
    while(fast!=NULL && fast->next!=NULL){ 
        slow = slow->next;
        fast = fast->next->next;

        //to check cycle exist or not
          if(slow==fast){//  then yes
        //re initialized the slow pointer with head value
        slow= head;
        while(slow!=fast){
          slow=slow->next;
          fast=fast->next; // when both are the same speed then the speed is same           (thats     the reason we dont   move fast as 2 x speed)
    
    }
    return slow;
          }
    }
    return NULL;
    }
};