class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n<=2) return n;
        int cur=2;
        for(int i=2;i<n;i++)
        {
            if(A[i]!=A[cur-2])
                A[cur++]=A[i];
        }
         
        return j;
    }
};