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
    ListNode* reverseList(ListNode* head) {
        // ListNode*next,*prev=NULL;
        // if(head->next==NULL)
        //     return head;
        // while(head!=NULL){
        //     next=head->next;
        //     head->next=prev;
        //     prev=head;
        //     head=next;
        // }
        // return prev;
        
        ListNode*nn=NULL;
        while(head){
            ListNode*temp=head;
            head=head->next;
            temp->next=nn;
            nn=temp;
        }
        return nn;
        
    }
};