//两次翻转，第一次整体翻转，第二次每个单词再翻转
class Solution {
public:
    void Reverse(string &str,int low,int high){
        while(low<high)
            swap(str[low++],str[high--]);
    }
    string ReverseSentence(string str) {
        if(str.empty()) return str;
        Reverse(str,0,str.size()-1);//整体旋转一遍
        //然后对每个单词都分别旋转
        int l=0,h=0;//记录每个单词的开始与结尾
        int i=0;//用来遍历字符串
        while(i<str.size()){
            while(str[i]!=' ' && i<str.size()){ //i遍历到空格
                i++;
            }
            h=i-1;
            Reverse(str,l,h);
            l=i+1;
            h=i+1;
            i++;
            continue;
        }
        return str;
    }
};