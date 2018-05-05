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
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        if(!pHead1||!pHead2) 
            return NULL;
        int len1=0,len2=0;
        ListNode* p1=pHead1;  
        ListNode* p2=pHead2;
        while(p1){
            len1++;
            p1=p1->next;
        }
        while(p2){
            len2++;
            p2=p2->next;
        }
        p1=pHead1;  
        p2=pHead2;
        if(len1==len2) return pHead1;
        if(len1>len2){
            int m=len1-len2;
            while(m){
                p1=p1->next;
                m--;
            }
        }
        else{
            int m=len2-len1;
            while(m){
                p2=p2->next;
                m--;
            }
        }
        while(p1&&p2&&p1->val!=p2->val){
            p1=p1->next;
            p2=p2->next;
        }
        return p1;
    }
};