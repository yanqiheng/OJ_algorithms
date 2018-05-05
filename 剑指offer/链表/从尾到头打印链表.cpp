/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int>res;
        stack<int> S;
        ListNode*p=head;
        while(p){
            S.push(p->val);
            p=p->next;
            continue;
        }
        while(!S.empty()){
            res.push_back(S.top());
            S.pop();
        }
        return res;
    }
};