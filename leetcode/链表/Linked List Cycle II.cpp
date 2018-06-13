class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)
            return head;
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                fast=head;
                while(fast!=slow){
                    fast=fast->next;
                    slow=slow->next;
                }
                return fast;
            }
        }
        return NULL;
    }
};