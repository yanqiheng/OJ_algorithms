//给定一个m×n矩阵，如果一个元素是0，则将其所在行和列全部元素变成0
class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        if(row==0||col==0||matrix.empty())
            return;
        bool firstrow=false;
        bool firstcol=false;
        //先判断第一行和第一列有没有0，并且标记好
        for(int i=0;i<col;i++){
            if(matrix[0][i]==0){
                firstrow=true;
                break;
            }
        }
        for(int i=0;i<row;i++){
            if(matrix[i][0]==0){
                firstcol=true;
                break;
            }
        }
        //从(1,1)的位置开始判断，如果有0则将行和列的值设为0
        for(int i=1;i<row;i++){
            for(int j=1;j<col;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        //检查第一行和第一列，然后变0
        for(int i=1;i<col;i++){
            if(matrix[0][i]==0){
                for(int j=1;j<row;j++)
                    matrix[j][i]=0;
            }
        }
        for(int i=1;i<row;i++){
            if(matrix[i][0]==0){
                for(int j=1;j<col;j++)
                    matrix[i][j]=0;
            }
        }
        if(firstrow){
            for(int j=0;j<col;j++)
                matrix[0][j]=0;
        }
        
        if(firstcol){
            for(int i=0;i<row;i++)
                matrix[i][0]=0;
        }
        return;

    }
};