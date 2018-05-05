/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
//请删除该链表中重复的结点，重复的结点不保留，返回链表头指针
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        if(!pHead||!pHead->next)
            return pHead;
        //新建一个头结点，防止头结点被删除
        ListNode* NewpHead=new ListNode(-1);
        NewpHead->next=pHead;
        //设置两个指针来遍历
        ListNode* p=NewpHead;
        ListNode* q=p->next;
        while(q){
            //p走到不重复的结点为止
            while(q->next && (q->next->val == q->val))
                q=q->next;
            if(p->next!=q){
                q=q->next;
                p->next=q;
            }
            else{
                p=q;
                q=q->next;
            }
        }
        return NewpHead->next;
    }
};