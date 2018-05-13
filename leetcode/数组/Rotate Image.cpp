//矩阵翻转90度：比较好的办法是首先沿着水平中线翻转一次，然后沿着主对角线翻转一次
class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
        int n=matrix.size();
        if(n==0)
            return;
        for(int i=0;i<n/2;i++){
            for(int j=0;j<n;j++)
                swap(matrix[i][j],matrix[n-i-1][j]);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++)
                swap(matrix[i][j],matrix[j][i]);
        }
        return;
    }
};