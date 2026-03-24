// Last updated: 24/03/2026, 14:31:06
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        // to check kth node exist or not 
        int count=0;
    while(count<k){
        if(temp==NULL){
        return head;
        }
        temp = temp->next;
        count++;
    }
    //recursively rest of the linked list
    ListNode* preNode=reverseKGroup(temp,k);
    //reverse the current group
    count=0;
    temp = head;
     while(count<k){
        ListNode*next= temp->next;
        temp->next=preNode;
        preNode= temp;
        temp =next;
        count++;
     }
     return preNode;
    }
};