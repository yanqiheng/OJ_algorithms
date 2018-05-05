/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    vector<vector<int> > Print(TreeNode* pRoot) {
        vector<vector<int> > Res;
        stack<TreeNode*> S1;
        stack<TreeNode*> S2;
        if(!pRoot)
            return Res;
        S1.push(pRoot);
        while(!S1.empty()||!S2.empty()){
            if(!S1.empty()){
                vector<int>res;//储存这个栈也即是这一行
                while(!S1.empty()){
                    TreeNode* T=S1.top();
                    S1.pop();
                    res.push_back(T->val);
                    if(T->left)
                        S2.push(T->left);
                    if(T->right)
                        S2.push(T->right);
                }
                Res.push_back(res);
            }
            else{
                vector<int>res;
                while(!S2.empty()){
                    TreeNode* T=S2.top();
                    S2.pop();
                    res.push_back(T->val);
                    if(T->right)
                        S1.push(T->right);
                    if(T->left)
                        S1.push(T->left);
                }
                Res.push_back(res);
            }
        }
        return Res;
    }
    
};