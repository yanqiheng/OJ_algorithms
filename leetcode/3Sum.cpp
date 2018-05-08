class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        vector<vector<int> > Res;
        int target=0;
        if(num.size()<3)
            return Res;
        //解为递增
        sort(num.begin(),num.end());    
        //i从第一个数开始做循环，一直到i为倒数第三个数，一个数固定，另两个数做查找
        int i=0;
        while(i<=num.size()-3){  
            int j=i+1;
            int k=num.size()-1;
            while(j<k){
                if(num[i]+num[j]+num[k]<target){
                    j++;
                    while(num[j]==num[j-1]&&j<k)
                        j++;
                    continue;
                }
                if(num[i]+num[j]+num[k]>target){
                    k--;
                    while(num[k]==num[k+1]&&k>j)
                        k--;
                    continue;
                }
                else{
                    vector<int> res;
                    res.push_back(num[i]);
                    res.push_back(num[j]);
                    res.push_back(num[k]);
                    Res.push_back(res);
                    j++;
                    k--;
                    while(num[j]==num[j-1] && num[k]==num[k+1] && j < k)
                        j++;
                    continue;
                }
            }
            //更新i值
            i++;
            //去掉重复解
            while(num[i]==num[i-1]&&i<=num.size()-3)
                i++;
        }
        return Res;
    }
};