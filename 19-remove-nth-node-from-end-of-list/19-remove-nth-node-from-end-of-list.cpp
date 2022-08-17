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
//         int c=0;
//         ListNode* cur=head;
//         if(cur->next==NULL)
//             return NULL;
//         while(cur){
//             c++;
//             cur=cur->next;
//         }
//         if(c==n){
//             head=head->next;
//         }
//         else{
//         ListNode*prev=head;
//         for(int i=0;i<c-n-1;i++){
//             prev=prev->next;
//         }
//         prev->next=prev->next->next;
//         }
        
//         return head;
        
        ListNode*slow=head,*fast=head;
        while(n--)
            fast=fast->next;
        if(fast==NULL){
            return head->next;
        }
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        
        return head;
    }
};