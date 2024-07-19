/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */ 
//   ListNode*curr = head;
//         unordered_set<ListNode*>s; 
//         bool cycle = false;
//         while(curr!=NULL){
//             if(s.find(curr)!=s.end()){
//             cycle = true;
//             break;
//         } 
//         s.insert(curr);
//         curr= curr->next;
//     } 
//     return cycle;
// }
// };
class Solution {
public:
    bool hasCycle(ListNode *head) {
         ListNode *slow = head;
         ListNode *fast = head;

        while (fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return true;
        }
        return false;
    }
};
