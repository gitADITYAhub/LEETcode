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
    ListNode* swapNodes(ListNode* head, int k) {
//         int c1=0;
//         ListNode* cur=head;
//         while(cur){
//             c1++;
//             cur=cur->next;
//         }
//         int c2=c1-k+1;
//         ListNode* prev=head;
//         for(int i=1;i<k;i++)
//             prev=prev->next;
//         cur=head;
//         for(int i=1;i<c2;i++)
//             cur=cur->next;
        
//         swap(prev->val,cur->val);
        
//         return head;
        
        ListNode*slow=head,*fast=head;
        
        while(--k)
            fast=fast->next;
        ListNode*temp=fast;
        while(fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        
        swap(slow->val,temp->val);
        
        return head;
    }
};