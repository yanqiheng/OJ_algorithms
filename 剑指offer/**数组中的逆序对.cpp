class Solution {
public:
    int InversePairs(vector<int> data) {
        if(data.size()<2)
            return 0;
        return mergesort(data,0,data.size()-1);
    }
    int mergesort(vector<int> &data,int begin,int end){
        if(begin==end)
            return 0;
        int mid = (begin+end)/2;
        int left = mergesort(data,begin,mid);
        int right = mergesort(data,mid+1,end);
        vector<int> temp(end-begin+1);
        int i=begin,j=mid+1;
        int cur=0,ret=0;
        while(i<=mid && j<=end){
            if(data[i]<=data[j])
                temp[cur++]=data[i++];
            else{
                temp[cur++]=data[j++];
                ret =(ret + mid-i+1)%1000000007;
            }
        }
        while(i<=mid)
            temp[cur++]=data[i++];
        while(j<=end)
            temp[cur++]=data[j++];
        for(int i=begin;i<=end;i++){
            data[i]=temp[i-begin];
        }
        return (ret+left+right)%1000000007;       
    }
};