#include<stdio.h>
int max(int a,int b){
    return a>b? a:b;
}
int height[26],dp[26];//输入导弹的高度和分别以各个高度的导弹为结尾的最长子序列长度
int main(){
    int k;
    while(scanf("%d",&k)!=EOF){
        for(int i=1;i<=k;scanf("%d",&height[i++]));
        for(int i=1;i<=k;i++){
            int tmax=1;
            for(int j=1;j<i;j++){
                if(height[j]>=height[i]) tmax=max(tmax,dp[j]+1);
            }
            dp[i]=tmax;
        }
        int ans=1;
        for(int i=1;i<=k;ans=max(ans,dp[i++]));
        printf("%d\n",ans);
    }
    return 0;
}