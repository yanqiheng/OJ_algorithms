class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n<=2) return n;
        int j=2;
        for(int i=2;i<n;i++)
        {
            if(A[i]!=A[j-2])
                A[j++]=A[i];
        }
         
        return j;
    }
};