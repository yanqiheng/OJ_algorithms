class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int sum=0;//每位相加和
        int one=1;//进位数
        for(int i=digits.size()-1;i>=0;i--){
            sum=digits[i]+one;
            digits[i]=sum%10;
            one=sum/10;
        }
        if(one>0)//加到最高位还有进位
            digits.insert(digits.begin(),one);
        return digits;
    }
};