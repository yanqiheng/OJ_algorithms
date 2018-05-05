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
    TreeNode* pre=NULL;
    TreeNode* head=NULL;
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if(!pRootOfTree) return NULL;
        if(pRootOfTree->left) Convert(pRootOfTree->left);
        if(!head) pre=head=pRootOfTree;//head指针为树的左下角
        else{
            pre->right=pRootOfTree;
            pRootOfTree->left=pre;
            pre=pre->right;
        }
        if(pRootOfTree->right) Convert(pRootOfTree->right);
        return head;
    }
};