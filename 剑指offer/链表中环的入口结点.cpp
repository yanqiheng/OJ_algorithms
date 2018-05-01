/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        if(!pHead)
            return NULL;
        //设置快指针和慢指针来遍历判断是否有环
        ListNode* slow=pHead;
        ListNode* fast=pHead;
        bool flag=false;
        while(fast->next&&fast->next->next){
            fast=fast->next->next;
            slow=slow->next;            
            if(fast==slow){
                //如果判断有环的话，让fast回到头结点
                fast=pHead;
                while(fast!=slow){
                    fast=fast->next;
                    slow=slow->next;
                }
                //相遇的点即为入口结点
                return slow;
            }
        }
        return NULL;
    }
};