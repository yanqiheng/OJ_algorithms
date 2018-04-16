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
    vector<int> path;
    vector<vector<int> > Res;
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        if(!root) return Res;
        path.push_back(root->val);
        expectNumber-=root->val;
        if(expectNumber==0 && !root->left && !root->right){
            Res.push_back(path);//此条路径已经遍历完
        }
        if(root->left) FindPath(root->left,expectNumber);
        if(root->right) FindPath(root->right,expectNumber);
        if(!path.empty()) path.pop_back();//???递归回溯时，应注意从遍历序列中删除已经遍历过的元素
        return Res;

    }
};