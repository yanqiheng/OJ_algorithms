class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > res(numRows);//设定vector大小
        for(int i=0;i<numRows;i++){
            res[i].resize(i+1);//resize(n)代表将vector的size限定为n，即如果原来vector的大小大于n，那么将剩下的多余都去掉，如果小于则将剩下初始化
            res[i][0]=1;
            res[i][i]=1;
            for(int j=1;j<i;j++){
                res[i][j]=res[i-1][j-1]+res[i-1][j];
            }
        }
        return res;
    }
};