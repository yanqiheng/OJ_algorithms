class Solution {
public:
    int singleNumber(int A[], int n) {
        if(n==0)
            return 0;
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[A[i]]+=1;
        }
        for(int i=0;i<n;i++){
            if(m[A[i]]==1)
                return A[i];
        }
        return 0;
    }
};