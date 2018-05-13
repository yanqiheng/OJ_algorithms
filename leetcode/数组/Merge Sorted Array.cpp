class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0&&j>=0){
            A[k--]= A[i]>=B[j] ? A[i--]:B[j--];
        }
        if(j>=0){
            while(j>=0)
                A[k--]=B[j--];
        }
        return;
    }
};