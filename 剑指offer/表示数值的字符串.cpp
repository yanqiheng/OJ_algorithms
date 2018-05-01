class Solution {
public:
    bool isNumeric(char* string)
    {
        if(!string)
            return false;
        char* p=string;
        int num=0,nume=0,dot=0;//用来标记小数点、整数部分和e指数是否存在
        if(*p=='+'||*p=='-')
            p++;
        if(!*p)
            return false;
        while(*p){// 指针要*取值需要注意一下
            if(*p>='0'&&*p<='9'){
                p++;
                num++;
            }
            else if(*p=='.'){
                if(dot>0||nume>0)
                    return false;
                dot++;
                p++;
            }
            else if(*p=='e'||*p=='E'){
                if(num=0||nume>0)
                    return false;
                p++;
                nume++;
                if(*p=='+'||*p=='-')
                    p++;
                if(!*p)
                    return false;
            }
            else 
                return false;
        }
        return true;
    }

};

//注意表示数值的字符串遵循的规则；
//在数值之前可能有一个“+”或“-”，接下来是0到9的数位表示数值的整数部分，如果数值是一个小数点，那么小数点后面可能会有若干个0到9的数位
//表示数值的小数部分。如果用科学计数法表示，接下来是一个‘e’或者‘E’，以及紧跟着一个整数（可以有正负号）表示指数。