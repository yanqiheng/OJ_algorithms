class Solution {
public:
    char *strStr(char *haystack, char *needle) {
        if(haystack==nullptr||needle==nullptr||strlen(needle)>strlen(haystack))
            return NULL;
        for(int i=0;i<=strlen(haystack)-strlen(needle);i++){
            int j=0;
            for(;j<strlen(needle);j++){
                if(haystack[i+j]!=needle[j])
                    break;
            }
            if(j==strlen(needle))
                return haystack+i;
        }
        return NULL;
    }
};