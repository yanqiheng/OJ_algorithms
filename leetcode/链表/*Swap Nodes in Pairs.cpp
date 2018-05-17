class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        if(head==NULL)
            return head;
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *cur=dummy;
        while(cur->next!=NULL&&cur->next->next!=NULL){
            swap(cur);
            cur=cur->next->next;
        }
        return dummy->next;
    }
    void swap(ListNode *p){
        ListNode *last=p->next;
        p->next=last->next;
        last->next=last->next->next;
        p->next->next=last; 
        return;
    }
};