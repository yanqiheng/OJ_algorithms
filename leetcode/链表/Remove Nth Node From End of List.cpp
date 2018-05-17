class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        if(head==NULL)
            return head;
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *slow=dummy;
        ListNode *fast=dummy;
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
       slow->next=slow->next->next;
       return dummy->next;
    }
};