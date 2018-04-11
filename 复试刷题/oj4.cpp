#include<stdio.h>
#include<string>
using namespace std;
struct BiTree{
    int key;
    BiTree *lc,*rc;
};
BiTree *insert(BiTree *T,int key){
    if(T==NULL){
        BiTree * node=(BiTree *)malloc(sizeof(BiTree));
        node->key=key;
        return node;
    }
    else if(key<T->key){
        T->lc=insert(T->lc,key);
    }
    else if(key>T->key){
        T->rc=insert(T->rc,key);
    }
    return T;
}
void preorder(BiTree *T){
    if(!T) return;
    printf("%d ",T->key);
    preorder(T->lc);
    preorder(T->rc);
}
void inorder(BiTree *T){
    if(!T) return;
    inorder(T->lc);
    printf("%d ",T->key);
    inorder(T->rc);
}
void postorder(BiTree *T){
    if(!T) return;
    postorder(T->lc);
    postorder(T->rc);
    printf("%d ",T->key);
}
 
int main(){
    int num;
    while(scanf("%d",&num)!=EOF){
        int A[num];
        BiTree *T=NULL;
        for(int i=0;i<num;scanf("%d",&A[i++]));
        for(int i=0;i<num;i++){
            T=insert(T,A[i]);
        }
        preorder(T);
        printf("\n");
        inorder(T);
        printf("\n");
        postorder(T);
        printf("\n");
    }
    return 0;
}
添加笔记
