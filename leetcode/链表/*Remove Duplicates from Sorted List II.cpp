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
    ListNode *deleteDuplicates(ListNode *head) {
        if(head==NULL)
            return head;
        ListNode *dummy=new ListNode(0);
        ListNode *real=dummy;
        ListNode *pre=dummy;
        ListNode *cur=head;
        while(cur!=NULL){
            if( (pre==dummy||cur->val!=pre->val) && (cur->val!=cur->next->val||cur->next==NULL) ){
                real->next=cur;
                real=cur;
            }
            pre=cur;
            cur=cur->next;
            pre->next=NULL;
        }
        return dummy->next;
    }
};