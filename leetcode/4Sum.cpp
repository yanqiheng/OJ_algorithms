class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        vector<vector<int> > Res;
        if(num.empty()||num.size()<4)
            return Res;
        sort(num.begin(),num.end());
        for(int i=0;i<num.size()-3;i++){
            if(i!=0&&num[i]==num[i-1])
                continue;
            for(int j=i+1;j<num.size()-2;j++){
                if(j!=i+1&&num[j]==num[j-1])
                    continue;
                //two sum
                int low=j+1,high=num.size()-1;
                int sum=target-num[i]-num[j];
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
                        res.push_back(num[j]);
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
        }
        return Res;
    }
};