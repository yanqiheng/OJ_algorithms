#include<stdio.h>
#include<algorithm>
using namespace std;
#define min(a,b) a<b?a:b
int list[2001];//物品重量
int dp[1001][2001];//前j件物品选择i件的疲劳度
int main(){
    int n,k;
    while(scanf("%d%d",&n,&k)!=EOF){
        for(int i=1;i<=n;scanf("%d",&list[i++]));
        sort(list+1,list+n+1);
        for(int j=1;j<=n;j++){//赋初始值
            dp[0][j]=0;
            for(int i=1;i<=j/2;i++){
                if(j>2*i) dp[i][j]=min(dp[i][j-1],dp[i-1][j-2]+(list[j]-list[j-1])*(list[j]-list[j-1]));
                else dp[i][j]=dp[i-1][j-2]+(list[j]-list[j-1])*(list[j]-list[j-1]);
            }
    }
        printf("%d\n",dp[k][n]);
    }
    return 0;
}