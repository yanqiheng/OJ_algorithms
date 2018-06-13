class Solution {
public:
    bool isMatch(const char *s, const char *p) {
        if(*s=='\0'&&*p=='\0')
            return true;
        if(*p=='\0'&&*s!='\0')
            return false;//字符没有正则式进行匹配
        if(*(p+1)!='*'){
            if( *p==*s || (*p=='.'&&*s!='\0') )
                return isMatch(s+1,p+1);
            return false;
        }
        else{
            if( *p==*s || (*p=='.'&&*s!='\0') )
                return isMatch(s+1,p)||isMatch(s,p+2);
            return isMatch(s,p+2);
        }
    }
};