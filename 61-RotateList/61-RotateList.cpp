// Last updated: 15/08/2026, 17:25:18
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0) return head;
        //tail and length fin 
        int length=1;
        ListNode *tail=head;
        while(tail->next){
            tail=tail->next;
            length++;
        }
        k = k%length; //normalize the list

        if(k==0) return head;
        tail->next=head;

        int newtail = length-k;
        ListNode* newTail= head;
        //set new head and break circle
        for(int i =1;i<newtail;i++){
            newTail=newTail->next;
        }
        ListNode* newHead = newTail->next;
         newTail->next = NULL;
         return newHead;
    }
};