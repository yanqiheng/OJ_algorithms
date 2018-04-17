class Solution {
public:
    vector<string> Permutation(string str) {
        vector<string> res;
        if(str.empty()) return res;
        sort(str.begin(),str.end());//第一次排序
        res.push_back(str);//输入第一次排序的结果
        while( next_permutation( str.begin(),str.end()) ){ //如果有下一个全排序结果
            res.push_back(str);
        }
        return res;
    }
};