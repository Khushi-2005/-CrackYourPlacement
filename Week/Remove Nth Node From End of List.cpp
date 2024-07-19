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
         ListNode*curr = head; 
         int length =0;
         while(curr!=NULL){
            length++;
            curr = curr->next;
         } 
         ListNode*prev = NULL;
         int jump = length-n; 
         curr = head;
         while(jump--){
            prev = curr;
            curr = curr->next;
         } 
         if(prev == NULL) {
         ListNode *temp = head;
           head = head->next;
           delete temp;
    } 
    else{
        prev->next = curr->next;
        delete curr;
    }
    return head;
    }
};
