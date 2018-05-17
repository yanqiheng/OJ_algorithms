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
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        if(head==NULL)
            return head;
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *preM=dummy;
        ListNode *mNode=head;
        ListNode *nNode=head;
        for(int i=1;i<m;i++){
            preM=mNode;
            mNode=mNode->next;
        }
        for(int i=1;i<n;i++){
            nNode=nNode->next;
        }
        //不断地把M放在N的后面
        while(mNode!=nNode){
            preM->next=mNode->next;
            mNode->next=nNode->next;
            nNode->next=mNode;
            mNode=preM->next;
        }
        return dummy->next;
    }
};