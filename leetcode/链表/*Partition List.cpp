class Solution {
public:
    ListNode *partition(ListNode *head, int x) {
        if(head==NULL)
            return head;
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        //设置三个辅助指针
        ListNode *left=dummy;
        ListNode *pre=dummy;
        ListNode *cur=head;
        while(cur!=NULL){
            if(left==pre){
                if(cur->val<x)
                    left=left->next;
                pre=cur;
                cur=cur->next;
            }
            else{
                if(cur->val>=x){
                    pre=cur;
                    cur=cur->next;
                }
                else{
                    pre->next=cur->next;
                    cur->next=left->next;
                    left->next=cur;
                    left=cur;
                    cur=pre->next;
                }
            }
        }
        return dummy->next;
    }
};