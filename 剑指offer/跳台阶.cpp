class Solution {
public:
    int jumpFloor(int number) {
        if(number<0) return 0;
        if(number<3) return number;
        int pre1=1;
        int pre2=2;
        int num;
        for(int i=3;i<=number;i++){
            num=pre1+pre2;
            pre1=pre2;
            pre2=num;
        }
        return num;       
    }
};