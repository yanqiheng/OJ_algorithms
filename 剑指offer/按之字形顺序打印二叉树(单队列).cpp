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
//奇数层从左往右，偶数层从右往左
class Solution {
public:
    vector<vector<int> > Print(TreeNode* pRoot) {
        vector<vector<int> > Res;
        if(!pRoot)
            return Res;
        //辅助队列
        queue<TreeNode*> Q;
        bool odd=true;
        Q.push(pRoot);
        while(!Q.empty()){
            //统计这一层的结点数
            int size=Q.size();
            //该层结果，即该层出队列
            vector<int> res;
            while(size--){
                TreeNode* T=Q.front();
                res.push_back(T->val);
                Q.pop();
                if(T->left)
                    Q.push(T->left);
                if(T->right)
                    Q.push(T->right);
            }
            //奇数层从左到右
            if(odd){
                Res.push_back(res);
                odd=!odd;
            }
            //偶数层从左往右
            else{
                reverse(res.begin(),res.end());
                Res.push_back(res);
                odd=!odd;
            }
        }
        return Res;
    }
};