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
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {
        if(!pRoot||k<=0)
            return NULL;
        vector<TreeNode*> Res;//负责接收中序遍历的值
        inOrder(pRoot,Res);
        if(k<=Res.size())
            return Res[k-1];
        return NULL;
    }
    
    void inOrder(TreeNode* T,vector<TreeNode*> &Res){
        if(T->left)
            inOrder(T->left,Res);
        Res.push_back(T);
        if(T->right)
            inOrder(T->right,Res);
    }
};