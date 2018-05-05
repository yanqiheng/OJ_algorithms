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
    vector<int>res;
    void DFS1(TreeNode *T){
        //先判断是不是空，是的话用'#'代替
        if(!T){
            res.push_back(0xFFFF);
            return;
        }
        //先序遍历
        res.push_back(T->val);
        DFS1(T->left);
        DFS1(T->right);
    }
    char* Serialize(TreeNode *root) {    
        DFS1(root);
        int*p=new int[res.size()];
        for(int i=0;i<res.size();i++){
            p[i]=res[i];
        }
         return (char*)p;
    }
    TreeNode* DFS2(int* &p){
        if(*p==0xFFFF){
            p++;
            return NULL;
        }
        else{
            TreeNode*res=new TreeNode(*p);
            p++;
            res->left=DFS2(p);
            res->right=DFS2(p);
            return res;
        }
    }
    TreeNode* Deserialize(char *str) {
        int*p=(int*)str;
        return DFS2(p);
    
    }
};