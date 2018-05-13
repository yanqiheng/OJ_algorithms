class Solution {
public:
    bool search(int A[], int n, int target) {
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(A[mid]==target) return true;
            else if(A[low]<A[mid]){//左半部分有序
                if(A[low]<=target&&target<A[mid])//target在范围内
                    high=mid-1;
                else
                    low=mid+1;
            }
            else if(A[low]>A[mid]){//右半部分有序
                if(A[mid]<target&&target<=A[high])//target在范围内
                    low=mid+1;
                else
                    high=mid-1;
            }
            else{
                low++;//往下看一步即可
            }
        }
        return false;
    }
};