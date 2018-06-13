class Solution {
public:
    /**
     * @param str: A string
     * @return: An integer
     */
    int atoi(string &str) {
        // write your code here
        if(str.empty()){
            return 0;
        }
        long long int res=0;//最终结果
        int i=0;//游标
        int flag=+1;//标记正负
        while(str[i]==' '&&i<str.size()){
            i++;
        }
        if(str[i]=='+'){
            flag=1;
            i++;
        }
        else if(str[i]=='-'){
            flag=-1;
            i++;
        }
        for(;i<str.size();i++){
            if(str[i]<'0'||str[i]>'9'){
                break;
            }
            if(res>INT_MAX) break;
            res=res*10+str[i]-'0';
        }
        res*=flag;
        if(res>INT_MAX){
            return INT_MAX;
        }
        if(res<INT_MIN){
            return INT_MIN;
        }
        return res;
    }
};