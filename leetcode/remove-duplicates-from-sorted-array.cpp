class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n==0) return 0;
        int i=0,j=1;
        while(i<n&&j<n){
            if(A[j]==A[i]){
                j++;
                continue;
            }
            else{
                A[++i]=A[j];
                j++;
                continue;
            }
        }
        return i+1;
    }
};