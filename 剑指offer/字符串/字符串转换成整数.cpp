class Solution {
public:
    int StrToInt(string str) {
        if(str.empty()) 
            return 0;
        int i=0;
        int flag=1; //表示正负，默认为正数
        while(str[i]==' ') //去掉空格
            i++;
        //跳过符号
        if(str[i]=='+'){
            flag=1;
            i++;
        }
        if(str[i]=='-'){
            flag=-1;
            i++;
        }
        int res=0;//结果
        while(str[i]){
            if(str[i]>='0'&&str[i]<='9'){
                res=res*10+(str[i]-'0');////右移一位，然后加上该位数字
                i++;
                continue;
            }
            else //不合法
                return 0;
        }
        return res*flag;
    }
};

//对数字是否溢出进行判断
//if(flag==1&&num>0x7FFFFFFF||flag==-1&&num<(signed int)0x80000000){
//   num=0;
//   break;	
//}