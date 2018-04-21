/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    int TreeDepth(TreeNode* pRoot)
    {
        if(!pRoot) return 0;
        int left=TreeDepth(pRoot->left);
        int right=TreeDepth(pRoot->right);
        if(left>right)
            return left+1;
        else
            return right+1; 
    }
};