/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        if(!pHead) return NULL;
        RandomListNode* node=pHead;
        while(node){//完全先复制一个结点以及next指针
            RandomListNode* newnode=new RandomListNode(node->label);
            newnode->next=node->next;
            node->next=newnode;
            node=newnode->next;
        }
        node=pHead;
        while(node){//复制的结点也指向结点的random指针
            if(node->random)
                node->next->random=node->random->next;
            node=node->next->next;
        }
        node=pHead;
        RandomListNode* copynode=node->next;//返回的链表头
        RandomListNode* temp;
        while(node->next){//拆分
            temp=node->next;
            node->next=temp->next;
            node=temp;
        }
        return copynode;
    }
};