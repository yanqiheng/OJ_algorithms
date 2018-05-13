class Solution {
public:
    bool isValidSudoku(vector<vector<char> > &board) {
        if(board.size()==0)
            return false;
        for(int i=0;i<9;i++){
            //对每行的每个元素的每行每列以及九格进行重复性检查
            map<char,bool> row;
            map<char,bool> col;
            map<char,bool> nine;
            for(int j=0;j<9;j++){
                //检查第i行
                if(board[i][j]!='.'){
                    if(row[board[i][j]])
                        return false;
                    else 
                        row[board[i][j]]=true;
                }
                //检查第j列
                if(board[j][i]!='.'){
                    if(col[board[j][i]])
                        return false;
                    else
                        col[board[j][i]]=true;
                }
                //第i个九宫格第j个格子
                if(board[i/3*3+j/3][i%3*3+j%3]!='.'){
                    if((nine[board[i/3*3+j/3][i%3*3+j%3]]))
                        return false;
                    else
                        nine[board[i/3*3+j/3][i%3*3+j%3]]=true;
                }
            }
        }
        return true;
    }
};