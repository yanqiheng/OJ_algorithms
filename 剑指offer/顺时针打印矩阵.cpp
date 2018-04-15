class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        int row=matrix.size(),col=matrix[0].size();
        vector<int>res;
        if(row==0||col==0) return res;
        int top=0,btm=row-1,left=0,right=col-1;//定义四周范围
        while(left<=right&&top<=btm){
            for(int i=left;i<=right;i++){
                res.push_back(matrix[top][i]);
            }
            if(top<btm){
                for(int i=top+1;i<=btm;i++){
                    res.push_back(matrix[i][right]);
                }
            }
            if(right-1>=left&&btm>top){
                for(int i=right-1;i>=left;i--){
                    res.push_back(matrix[btm][i]);
                }
            }
            if(btm-1>top&&left<right){
                for(int i=btm-1;i>top;i--){
                    res.push_back(matrix[i][left]);
                }
            }
            left++;right--;top++;btm--;
        }
        return res;
    }
};