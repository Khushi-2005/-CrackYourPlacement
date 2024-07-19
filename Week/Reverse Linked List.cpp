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
ListNode* newhead = NULL;
ListNode* reversell(ListNode* node){
    if(node->next==NULL){
    newhead = node;
    return node;
}
    ListNode * nn =reversell(node->next); 
    nn->next = node;
    node->next = NULL;
    return node; 
}
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
        return NULL; 
        reversell(head);
        return newhead;
    }
};
