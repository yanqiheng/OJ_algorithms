class Solution {
public:
    int search(int A[], int n, int target) {
        if(n=0) 
            return -1;
        int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(A[mid]==target)
                return mid;
            if(A[low]<=A[mid]){//左半部分有序
                if(A[low]<=target&&target<A[mid])//在左半段
                    high=mid-1;
                else
                    low=mid+1;
            }
            else{//右半部分有序
                if(A[mid]<target&&target<=A[high])//在右半段
                    low=mid+1;
                else
                    high=mid-1;
            }
        }
        return -1;
    }
};