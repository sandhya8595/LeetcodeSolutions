// Last updated: 10/04/2026, 00:19:03
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
    ListNode* removeNodes(ListNode* head) {
       stack< ListNode*>st;
           ListNode* curr= head;
           
       while(curr!=NULL){
        while(!st.empty() && st.top()->val<curr->val){       
         st.pop();
        }
        st.push(curr);
        curr= curr->next;
       } 
       // it is for reverse the linked list
     ListNode* newHead=NULL;
      while(!st.empty()){
      ListNode* p=st.top();
      st.pop();
      p->next=newHead;
      newHead=p;
      }
      return newHead;
    }
};

//we use here monotonic stack because we campare the element step by step (we use decreasing stack bcz  largest elemnet should be in bottom)