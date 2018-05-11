//一次可以跳上1级台阶，也可以跳上2级。跳上一个n级的台阶总共有多少种跳法?
class Solution {
public:
    int climbStairs(int n) {
        if(n<=0)
            return 0;
        if(n<3)
            return n;
        int pre1=1;
        int pre2=2;
        int res=0;
        for(int i=3;i<=n;i++){
            res=pre1+pre2;
            pre1=pre2;
            pre2=res;
        }
        return res;
    }
};