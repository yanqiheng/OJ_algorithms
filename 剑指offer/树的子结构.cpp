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
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if(!pRoot1||!pRoot2) return false;
        //bool res=false;
        //if(pRoot1->val==pRoot2->val) res=Judge(pRoot1,pRoot2);
        //if(res==false) res=HasSubtree(pRoot1->left,pRoot2);
        //if(res==false) res=HasSubtree(pRoot1->right,pRoot2);
        //return res;
        return Judge(pRoot1,pRoot2)||HasSubtree(pRoot1->left,pRoot2)||HasSubtree(pRoot1->right,pRoot2);
    }
    bool Judge(TreeNode* T1, TreeNode* T2){
        if(!T2) return true;
        if(!T1) return false;
        return T1->val==T2->val&&Judge(T1->left,T2->left)&&Judge(T1->right,T2->right);
    }
};