class Solution {
public:
    vector<int> grayCode(int n) {
        int size=pow(2,n);//格雷码的数量即2^n
        vector<int> res;
        for(int i=0;i<size;i++)
            //二进制与gray码转换
            res.push_back(i^(i>>1));//i的二进制右移一位以后与i各位相亦或的值即为gray码
        return res;
    }
};