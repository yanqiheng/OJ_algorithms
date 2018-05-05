class Solution {
public:
	void replaceSpace(char *str,int length) {
        int num=0;//空格数
        for(int i=0;i<length;i++){
            if(str[i]==' ') num++;
        }
        for(int i=length-1;i>=0;i--){//后往前
            if(str[i]!=' '){
                str[i+2*num]=str[i];
            }
            else{
                num--;
                str[i+2*num]='%';
                str[i+2*num+1]='2';
                str[i+2*num+2]='0';
            }
        }
	}
};