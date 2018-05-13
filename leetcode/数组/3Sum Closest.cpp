class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        int res;
        int min_gap = INT_MAX;
        if(num.size()<3)
            return res;
        sort(num.begin(),num.end());
        for(int i=0;i<num.size()-2;i++){
            int j=i+1,k=num.size()-1;
            while(j<k){
                int gap=abs(num[i]+num[j]+num[k]-target);
                if(gap<min_gap){
                    res=num[i]+num[j]+num[k];
                    min_gap=gap;
                }
                if(num[i]+num[j]+num[k]>target){
                    k--;
                    continue;
                }
                else{
                    j++;
                    continue;
                }
            }
        }
        return res;
    }
};