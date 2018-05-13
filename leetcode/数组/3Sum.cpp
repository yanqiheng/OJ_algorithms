class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        vector<vector<int> > Res;
        if(num.empty()||num.size()<3)
            return Res;
        sort(num.begin(),num.end());
        for(int i=0;i<=num.size()-3;i++){
            if(i!=0&&num[i]==num[i-1])
                continue;
                //两数相加的查找办法
                int low=i+1,high=num.size()-1;
                int sum=-num[i];
                while(low<high){
                    if(num[low]+num[high]<sum){
                        low++;
                        while(low<high&&num[low]==num[low-1])
                            low++;
                        continue;
                    }
                        
                    if(num[low]+num[high]>sum){
                        high--;
                        while(low<high&&num[high]==num[high+1])
                            high--;
                        continue;
                    }
                        
                    else{
                        vector<int> res;
                        res.push_back(num[i]);
                        res.push_back(num[low]);
                        res.push_back(num[high]);
                        Res.push_back(res);
                        low++;
                        high--;
                        while(low<high&&num[low]==num[low-1])
                            low++;
                        while(low<high&&num[high]==num[high+1])
                            high--;
                        continue;
                    }
                }
        }
        return Res;
    }
};