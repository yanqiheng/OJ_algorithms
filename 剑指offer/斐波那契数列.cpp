class Solution {
public:
    int Fibonacci(int n) {
        if(n<2) return n;
        int pre1=0,pre2=1;//设置两个指针指向第n项的前两个数，并且动态移动
        int num;
        for(int i=2;i<=n;i++){
            num=pre1+pre2;
            pre1=pre2;
            pre2=num;
        }
        return num;

    }
};