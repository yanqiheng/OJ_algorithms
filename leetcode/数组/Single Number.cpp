class Solution {
public:
    int singleNumber(int A[], int n) {
        if(n==0)
            return 0;
        int res;
        for(int i=0;i<n;i++)
            res^=A[i];
        return res;
    }
};