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
    bool isSymmetrical(TreeNode* pRoot)
    {
        if(!pRoot)
            return true;
        return Judge(pRoot->left,pRoot->right);
    }
    bool Judge(TreeNode* T1,TreeNode* T2){
        //如果满足条件则递归判断
        if( (T1&&T2)&&(T1->val==T2->val) )
            return Judge(T1->left,T2->right)&&Judge(T1->right,T2->left);
        //都为空时候则为真
        return !T1&&!T2;
    }

};