//每一个丑数由前面的数乘2、3、5而得来，取一个最小的数
class Solution {
public:
    int GetUglyNumber_Solution(int index) {
        if(index<7) return index;
        vector<int> res(index);//想利用数组的序号需要初始化一个index大小的vector
        res[0]=1;
        int t2=0,t3=0,t5=0;
        for(int i=1;i<index;i++){
            res[i]=min(res[t2]*2, min(res[t3]*3,res[t5]*5) );
            if(res[i]==res[t2]*2) t2++;
            if(res[i]==res[t3]*3) t3++;
            if(res[i]==res[t5]*5) t5++;
        }
        return res[index-1];
    }
};