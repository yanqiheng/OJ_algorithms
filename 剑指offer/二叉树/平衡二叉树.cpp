class Solution {
public:
    int depth(TreeNode* pRoot){//判断树的深度
        if(!pRoot) return 0;
        int left=depth(pRoot->left);
        int right=depth(pRoot->right);
        return left>right ? left+1 :right+1;
    }
    
    bool IsBalanced_Solution(TreeNode* pRoot) {
        if(!pRoot) return true;//空树是平衡二叉树
        int left=depth(pRoot->left);
        int right=depth(pRoot->right);
        if(left-right>1||left-right<-1) return false;
        return IsBalanced_Solution(pRoot->left)&&IsBalanced_Solution(pRoot->right);
    }
};