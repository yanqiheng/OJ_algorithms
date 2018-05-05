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
        queue<TreeNode*> Q1;
        queue<TreeNode*> Q2;
        if(!pRoot)
            return Res;
        Q1.push(pRoot);
        while(!Q1.empty()||!Q2.empty()){
            if(!Q1.empty()){
                //res保存该层的值，并且该层的值由queue转移到vector
                vector<int>res;
                while(!Q1.empty()){
                    TreeNode* T=Q1.front();
                    Q1.pop();
                    res.push_back(T->val);
                    if(T->left)
                        Q2.push(T->left);
                    if(T->right)
                        Q2.push(T->right);
                }
                Res.push_back(res);
            }
            else{
                vector<int>res;
                while(!Q2.empty()){
                    TreeNode* T=Q2.front();
                    Q2.pop();
                    res.push_back(T->val);
                    if(T->left)
                        Q1.push(T->left);
                    if(T->right)
                        Q1.push(T->right);
                }
                Res.push_back(res);
            }
        }
        return Res;
    }
    
};
//另一种写法：
//v1.push_back(q1.front()->val);
//if(q1.front()->left!=NULL) q2.push(q1.front()->left);
//if(q1.front()->right!=NULL) q2.push(q1.front()->right);
//q1.pop();