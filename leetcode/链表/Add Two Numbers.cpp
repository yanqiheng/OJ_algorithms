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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *Newhead=new ListNode(0);
        ListNode *Node=Newhead;
        int one=0;
        while(l1||l2){
            if(l1){
                one+=l1->val;
                l1=l1->next;
            }
            if(l2){
                one+=l2->val;
                l2=l2->next;
            }
            Node->next=new ListNode(one%10);
            Node=Node->next;
            one/=10;
        }
        if(one!=0){
            Node->next=new ListNode(one);
        }
        return Newhead->next;
    }
};