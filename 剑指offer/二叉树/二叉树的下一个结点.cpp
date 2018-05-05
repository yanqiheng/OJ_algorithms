/*
struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next; //本树特殊特殊地方在于指向父结点的指针
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
        
    }
};
*/
//要求：中序遍历顺序的下一个结点并且返回
class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
        if(!pNode)
            return pNode;
        //有右子树
        if(pNode->right){
            TreeLinkNode* p=pNode->right;
            while(p->left){
                p=p->left;
            }
            return p;
        }
        //无右子树
        else{
            while(pNode->next){
                //记录父节点
                TreeLinkNode* p=pNode->next;
                if(p->left==pNode)
                    return p;
                pNode=pNode->next;
            }
        }
        return NULL;
    }
};
//思路：
//分析二叉树的下一个节点，一共有以下情况：
//1.二叉树为空，则返回空；
//2.节点右孩子存在，则设置一个指针从该节点的右孩子出发，一直沿着指向左子结点的指针找到的叶子节点即为下一个节点；
//3.节点不是根节点。如果该节点是其父节点的左孩子，则返回父节点；否则继续向上遍历其父节点的父节点，重复之前的判断，返回结果