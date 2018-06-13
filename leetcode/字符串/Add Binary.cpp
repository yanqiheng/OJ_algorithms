class Solution {
public:
    string addBinary(string a, string b) {
        const int n=a.size()>b.size()?a.size():b.size();
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string res;
        int carry=0;//为进位值，要设成全局变量
        for (int i=0;i<n;i++) {
            int ai= i<a.size()? a[i]-'0':0;//运算的时候要去掉'0'
            int bi= i<b.size()? b[i]-'0':0;
            int res_i=(ai+bi+carry)%2;
            carry=(ai+bi+carry)/2;
            res.insert(res.begin(),res_i+'0');
        }
        if(carry==1){
            res.insert(res.begin(),'1');
        }
        return res;
    }
};