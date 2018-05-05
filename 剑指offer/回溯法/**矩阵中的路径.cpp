class Solution {
public:
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
        if(matrix==NULL||rows<1||cols<1||str==NULL) return false;
        bool* flag=new bool[strlen(matrix)];//新开辟一个bool型数组，并设立指针指向,标记某个字符是否访问过
        memset(flag,false,strlen(matrix));//以flag开始的rows*cols的大小内存赋初值
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(helper(matrix,rows,cols,i,j,str,0,flag)) return true;
            }
        }
        delete[] flag;
        return false;
    }
    
    bool helper(char* matrix,int rows,int cols,int i,int j,char*str,int k,bool* flag){
        int num=i*cols+j;
        if(i<0||i>=rows||j<0||j>=cols||matrix[num]!=str[k]||flag[num]==true) 
            return false;
        if(k==strlen(str)-1) 
            return true;//字符串查找结束
        flag[num]=true;
        //四个方向递归查找
        if( helper(matrix,rows,cols,i-1,j,str,k+1,flag)||helper(matrix,rows,cols,i+1,j,str,k+1,flag)
          ||helper(matrix,rows,cols,i,j+1,str,k+1,flag)||helper(matrix,rows,cols,i,j-1,str,k+1,flag) ) {
            return true;
        }
        //回溯标记未访问
        flag[num]=false;
        return false;
    }
    
};