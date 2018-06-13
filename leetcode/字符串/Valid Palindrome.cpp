class Solution {
public:
    bool isPalindrome(string s) {
        if(s==""||s.size()==0)
            return false;
        int i=0,j=s.size()-1;
        while(i<j){
            if(isalnum(s[i])==false){
                i++;
                continue;
            }
                
            if(isalnum(s[j])==false){
                j--;
                continue;
            }
            if(tolower(s[i])!=tolower(s[j]))
                return false;
            i++;
            j--;
        }
        return true;
    }
};