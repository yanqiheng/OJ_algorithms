#include<stdio.h>
#include<string>
using namespace std;
struct BiTree{
    char key;
    BiTree *lc,*rc;
};
char str[80];
int i;
BiTree * CreateTree(){
    char c=str[i++];//先序遍历的每个字符
    if(c=='#') return NULL;
    BiTree * node=(BiTree *)malloc(sizeof(BiTree));
    node->key=c;
    node->lc=CreateTree();
    node->rc=CreateTree();
    return node;
}
void inOrderTraversal(BiTree *T){
    if(!T) return;
    inOrderTraversal(T->lc);
    printf("%c ",T->key);
    inOrderTraversal(T->rc);
}
int main(){
    while(scanf("%s",str)!=EOF){
        i=0;
        BiTree *T=CreateTree();
        inOrderTraversal(T);
        printf("\n");
    }
    return 0;
}