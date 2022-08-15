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
    void deleteNode(ListNode* node) {
        ListNode*cur=node->next;
//         while(node->next!=NULL){
//             node->val=node->next->val;
//             cur=node;
//             node=node->next;
//         }
        
//         cur->next=NULL;
        node->val=cur->val;
        node->next=cur->next;
        
    }
};