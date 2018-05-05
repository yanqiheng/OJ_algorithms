//位运算中异或的性质：两个相同数字异或=0，一个数和0异或还是它本身
class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        if(data.size()==0) return;
        if(data.size()==2){
            *num1=data[0];
            *num2=data[1];
        }
        int res=data[0];//存储所有数二进制的亦或的结果
        for(int i=1;i<data.size();i++){
            res^=data[i];//实际最后亦或的结果就是两个只出现一次的数字亦或的结果
        }
        //假设A与B只出现一次
        int n=1;
        while(!(res&n) ){
            n=n<<1;
        }//从最低位开始检查，两个数哪一位不一样
        int res1=0,res2=0;
        for(int i=0;i<data.size();i++){//划堆，将这两个数化为两堆
            if( (n&data[i]) )
                res1^=data[i];
            else
                res2^=data[i];
        }
        *num1=res1;
        *num2=res2;
        return;
    }
};