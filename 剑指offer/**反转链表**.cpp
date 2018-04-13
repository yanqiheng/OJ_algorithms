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
        ListNode* p2=NULL;
        while(pHead){
            p2=pHead->next;
            pHead->next=p1;
            p1=pHead;
            pHead=p2;
        }
        return p1;
    }
};