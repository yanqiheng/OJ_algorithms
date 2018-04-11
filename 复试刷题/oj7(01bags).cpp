include<stdio.h>
#define MAX(a,b) (a>b?a:b)
struct{
    int w;//体积
    int v;//价值
}Q[101];
int dp[1001];
int main(){
    int V,N;//总容量和物品种类数
    while(scanf("%d%d",&V,&N)!=EOF){
        for(int i=1;i<=N;i++){
            scanf("%d%d",&Q[i].w,&Q[i].v);
        }
        for(int i=0;i<=V;dp[i++]=0);
        for(int i=1;i<=N;i++){
            for(int j=V;j>=Q[i].w;j--){
                dp[j]=MAX( dp[j-Q[i].w]+Q[i].v , dp[j] );
            }
        }
        printf("%d\n",dp[V]);
    }
    return 0;
}
