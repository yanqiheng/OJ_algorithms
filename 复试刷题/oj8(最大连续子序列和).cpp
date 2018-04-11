#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int dp[1000001],data[1000001];
    int n;
    long long MAX=-999;
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;i++){
            scanf("%d",&data[i]);
        }
        dp[0]=data[0];
        for(int i=1;i<n;i++){
            dp[i]=max(dp[i-1]+data[i] , data[i] );
            if(dp[i]>MAX) MAX=dp[i];
        }
        printf("%d\n",MAX);
    }
    return 0;
}