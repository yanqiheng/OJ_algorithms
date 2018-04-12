/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    map<int,int>m;//中序遍历的每个数对应的位置
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if(pre.empty()||vin.empty()) return NULL;
        for(int i=0;i<vin.size();i++){
            m[ vin[i] ]=i;//关键点
        }
        TreeNode* res=reConstruct(pre,0,pre.size()-1,vin,0,vin.size()-1);
        return res;
    }
    TreeNode* reConstruct(vector<int> pre,int prel,int prer,vector<int> vin,int vinl,int vinr){
        if(prel>prer||vinl>vinr) return NULL;
        int mid=m[ pre[prel]];
        int num=mid-vinl;//左子树的节点数
        TreeNode* T=new TreeNode(pre[prel]);
        T->left=reConstruct(pre,prel+1,prel+num,vin,vinl,mid-1);//左子树
        T->right=reConstruct(pre,prel+num+1,prer,vin,mid+1,vinr);
        return T;
    }
};