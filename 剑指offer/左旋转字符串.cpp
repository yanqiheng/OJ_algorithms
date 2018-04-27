//和翻转单词顺序是一样的原理，分为两段各做一次翻转再做一次总的翻转。
//主要注意输入为空串的情况和越界的问题，一定要注意这些细节
class Solution {
public:
    string LeftRotateString(string str, int n) {
        if(str.empty()||n>=str.size())
            return str;
        Reverse(str,0,n-1);
        Reverse(str,n,str.size()-1);
        Reverse(str,0,str.size()-1);
        return str;
    }
    void Reverse(string &str,int low,int high){
        while(low<high){
            swap(str[low],str[high]);
            low++;
            high--;
            continue;
        }
        return;
    }
};