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
    vector<int> PrintFromTopToBottom(TreeNode* root) {//借助队列实现层次遍历
        vector<int>res;
        if(!root) return res;
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty()){
            TreeNode*T=Q.front();//暂存出队的结点
            res.push_back(T->val);//每次出队的结点将其值入res
            Q.pop();
            if(T->left) Q.push(T->left);
            if(T->right) Q.push(T->right);
        }
        return res;
    }
};