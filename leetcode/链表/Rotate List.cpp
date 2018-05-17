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
    ListNode *rotateRight(ListNode *head, int k) {
        if(head==NULL)
            return head;
        ListNode *slow=head;
        ListNode *fast=head;
        int length=0;
        while(fast!=NULL){
            length++;
            fast=fast->next;
        }
        fast=head;
        //fast指针向后移动k个
        for(int i=0;i<k%length;i++){
            fast=fast->next;
        }
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=head;
        head=slow->next;
        slow->next=NULL;
        return head;
    }
};