class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        int num=0,temp;
        if(n<=0) return 0;
        for(int i=1;i<=n;i++){
            temp=i;
            while(temp){
                if(temp%10==1) num++;
                temp/=10;
            }
        }
        return num;
    }
};