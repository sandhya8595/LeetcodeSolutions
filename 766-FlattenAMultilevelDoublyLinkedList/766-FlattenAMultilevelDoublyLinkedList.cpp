// Last updated: 24/03/2026, 14:29:09
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(head==NULL){
        return head;
        }
        Node* curr = head;
        while(curr!=NULL){
        if(curr->child!=NULL){//to check valid child or not
        //flatten child node
          Node* next=curr->next;
          curr->next=flatten(curr->child);
          curr->next->prev= curr;
          curr->child= NULL;
        // tail with linked list
          while(curr->next!=NULL){
             curr=curr->next;
          }
            //attached node
        if(next!=NULL){
            curr->next=next;
            next->prev=curr;
          }
        }
           curr=curr->next;
        }
         return head;
      }
    };