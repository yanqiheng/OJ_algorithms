class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        if(data.size()==0) return 0;
        int min=FindMin(data,k);
        int max=FindMax(data,k);
        if(max>-1&&min>-1) return max-min+1;
        return 0;
    }
    int FindMin(vector<int> data,int k){
        int low=0,high=data.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(k<data[mid]) high=mid-1;
            if(k>data[mid]) low=mid+1;
            if(k==data[mid]){
                if(data[mid-1]!=k) return mid;
                else high=mid-1;                
            }
            }           
        return -1;
    }
    int FindMax(vector<int> data,int k){
        int low=0,high=data.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(k<data[mid]) high=mid-1;
            if(k>data[mid]) low=mid+1;
            if(k==data[mid]){
                if(data[mid+1]!=k) return mid;
                else low=mid+1;
            }
            }
        return -1;
    }
};