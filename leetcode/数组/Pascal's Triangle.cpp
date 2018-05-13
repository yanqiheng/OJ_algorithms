class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > Res;
        if(numRows==0)
            return Res;
        Res.push_back(vector<int>(1,1));//第一行
        for(int i=2;i<=numRows;i++){
            vector<int> res(i,1);//当前行有i个值,并且每个值为1
            for(int j=1;j<=i-2;j++)
                res[j]=Res[i-2][j]+Res[i-2][j-1];
            Res.push_back(res);
        }
        return Res;
    }
};