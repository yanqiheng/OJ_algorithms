class Solution {
public:
    /**
     * @param s: input string
     * @return: the longest palindromic substring
     */
    string longestPalindrome(string &s) {
        // write your code here
        if(s==""||s.size()==0)
            return s;
        string res;//回文子串
        int max=0;//当前最大回文子串长度
        bool dp[s.size()][s.size()];
        for(int j=0;j<s.size();j++){
            for(int i=0;i<=j;i++){
                dp[i][j]= s[i]==s[j] && ( j-i<2 || dp[i+1][j-1] );
                if(dp[i][j]==true&&j-i+1>max){
                    max=j-i+1;
                    res=s.substr(i,max);
                }
            }
        }
        return res;
    }
};