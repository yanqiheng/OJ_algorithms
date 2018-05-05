class Solution {
public:
    int movingCount(int threshold, int rows, int cols)
    {
        bool* flag=new bool[rows*cols];
        memset(flag,false,rows*cols);
        int count;
        count=moving(threshold,rows,cols,0,0,flag);
        return count;
    }
    int getnum(int num){
        int res=0;
        while(num){
            res+=num%10;
            num/=10;
        }
        return res;
    }
    int moving(int threshold, int rows, int cols,int i,int j,bool*flag){
        if(i<0||i>=rows||j<0||j>=cols||getnum(i)+getnum(j)>threshold||flag[cols*i+j]==true) return 0;
        flag[cols*i+j]=true;
        int count=1+moving(threshold,rows,cols,i+1,j,flag)
            +moving(threshold,rows,cols,i-1,j,flag)
            +moving(threshold,rows,cols,i,j+1,flag)
            +moving(threshold,rows,cols,i,j-1,flag);
        return count;
    }

};