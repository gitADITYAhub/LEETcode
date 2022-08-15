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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *cur=head;
        // ListNode *nn;
        if(cur==NULL){
            return NULL;
        }
        
        while(cur->next!=NULL and cur!=NULL){
        if(cur->val==cur->next->val){
            // nn=cur->next->next;
            // cur->next=nn;
            cur->next=cur->next->next;
        }
        else
            cur=cur->next;
        }
        return head;
    }
};