class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex+1,1);//大小为rowIndex+1，初始值为1
        if(rowIndex<0)
            return res;        
        for(int i=1;i<=rowIndex;i++){
            for(int j=i-1;j>=1;j--)
                res[j]=res[j]+res[j-1];
        }
        return res;
    }
};