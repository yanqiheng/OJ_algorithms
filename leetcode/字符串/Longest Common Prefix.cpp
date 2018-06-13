//最长公共前缀
class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        if(strs.empty())
            return "";
        for(int idx=0;idx<strs[0].size();idx++){ //每个字符串的第idx个字符
            for(int i=1;i<strs.size();i++){
                if(strs[i][idx]!=strs[0][idx])
                    return strs[0].substr(0,idx);
            }
        }
        return strs[0];
    }
};