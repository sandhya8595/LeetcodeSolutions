// Last updated: 24/03/2026, 14:31:09
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
    ListNode* mergeTwoLists(ListNode* List1, ListNode* List2) {
         ListNode* dummyNode = new ListNode(-1);
         ListNode* curr = dummyNode;
        

     while(List1 != NULL && List2 != NULL){
        if(List1->val <= List2->val){
                curr->next = List1;
                List1 = List1->next;
            }
            else{
                curr->next = List2;
                List2 = List2->next;
            }
        curr=curr->next;
     }
        if(List1!=NULL){
            curr->next=List1;
        }
        if(List2!=NULL){
            curr->next=List2;
        }
        return dummyNode->next;
    }
};