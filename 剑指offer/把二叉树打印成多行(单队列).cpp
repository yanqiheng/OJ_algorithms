class Solution {
public:
        vector<vector<int> > Print(TreeNode* pRoot) {
            vector<vector<int>> Res;
            if(!pRoot) return Res;
            queue<TreeNode*>Q;
            Q.push(pRoot);
            while(!Q.empty()){
                int size=Q.size();
                vector<int>res;
                while(size--){
                    TreeNode*T=Q.front();
                    Q.pop();
                    res.push_back(T->val);
                    if(T->left) Q.push(T->left);
                    if(T->right) Q.push(T->right);
                }
                Res.push_back(res);
            }
            return Res;
         
        }
     
};
