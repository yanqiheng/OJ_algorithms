//模式中的字符'.'表示任意一个字符，而'*'表示它前面的字符可以出现任意次（包含0次)
class Solution {
public:
    bool match(char* str, char* pattern)
    {
        if(!*pattern&&!*str)
            return true;
        if(!*pattern&&*str)
            return false;
        //pattern下一个字符不为‘*’
        if(*(pattern+1)!='*'){
            if(*pattern==*str||*pattern=='.'&&*str)
                return match(str+1,pattern+1);
            else
                return false;
        }
        //pattern下一个字符为‘*’
        else{
            if(*pattern==*str||*pattern=='.'&&*str)
                return match(str+1,pattern)||match(str,pattern+2);
            else
                return match(str,pattern+2);
        }
    }
};