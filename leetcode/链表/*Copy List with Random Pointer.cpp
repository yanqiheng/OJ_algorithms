class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        if(head==NULL)
            return head;
        RandomListNode *cur=head;
        while(cur!=NULL){
            RandomListNode *Newnode=new RandomListNode(cur->label);
            Newnode->next=cur->next;
            cur->next=Newnode;
            cur=cur->next->next;
        }
        cur=head;
        while(cur!=NULL){
            if(cur->random)
                cur->next->random=cur->random->next;
            cur=cur->next->next;
        }
        cur=head;
        RandomListNode *dummy=new RandomListNode(-1);
        RandomListNode *Newcur=dummy;
        while(cur!=NULL){
            Newcur->next=cur->next;
            Newcur=Newcur->next;
            cur=cur->next->next;
        }
        return dummy->next;
    }
};