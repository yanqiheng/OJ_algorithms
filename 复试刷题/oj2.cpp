#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct A{
    char name[100];
    int num;
    int score;
}buff[1000];
bool cmp1(A a,A b){
    if(a.score!=b.score) return a.score<b.score;
    else return a.num<b.num;
}
bool cmp2(A a,A b){
    if(a.score!=b.score) return a.score>b.score;
    else return a.num<b.num;
}
int main(){
    int n;int key;
    while(scanf("%d",&n)!=EOF){
        scanf("%d",&key);
        for(int i=0;i<n;i++){
            scanf("%s%d",buff[i].name,&buff[i].score);
            buff[i].num=i;
        }
        if(key==1){
            sort(buff,buff+n,cmp1);
        }
        if(key==0){
            sort(buff,buff+n,cmp2);
        }
        for(int i=0;i<n;i++){
            printf("%s %d\n",buff[i].name,buff[i].score);
        }
    } 
    return 0;
}
//由王道机试指南过来练练该题~~~