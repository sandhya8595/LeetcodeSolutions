// Last updated: 24/03/2026, 14:29:53
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
//use three pointer pre ,curr,next
    ListNode* reverseList(ListNode* head) {
        ListNode*curr = head;
        ListNode*pre = NULL;
        ListNode*next = NULL;
    while(curr!=NULL){
        next = curr->next;
        curr->next=pre;
        pre= curr;
        curr= next;
    }
    return pre;
    }  
};