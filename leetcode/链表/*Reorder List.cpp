class Solution {
public:
    void reorderList(ListNode *head) {
        if(head==NULL)
            return;
        ListNode * mid=findMid(head);
        ListNode *l2=mid->next;
        mid->next=NULL;
        l2=reverse(l2);
        ListNode *l1=head;
        while(l1!=NULL&&l2!=NULL){
            ListNode *next=l1->next;
            l1->next=l2;
            l2=l2->next;
            l1->next->next=next;
            l1=next;
        }
        return;
    }
    ListNode * findMid(ListNode *head){
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode * reverse(ListNode *head){
        ListNode *newNode=NULL;
        while(head!=NULL){
            ListNode *next=head->next;
            head->next=newNode;
            newNode=head;
            head=next;
        }
        return newNode;
    }
};