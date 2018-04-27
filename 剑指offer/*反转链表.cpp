/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        if(pHead==NULL) return NULL;
        ListNode* p1=NULL;
        ListNode* p2=NULL;//p1是pHead前面的指针，p2是暂存pHead的后继指针
        while(pHead){
            p2=pHead->next;
            pHead->next=p1;
            p1=pHead;
            pHead=p2;
        }
        return p1;//pHead为空的时候循环结束，返回pHead前面的指针，即头指针
    }
};