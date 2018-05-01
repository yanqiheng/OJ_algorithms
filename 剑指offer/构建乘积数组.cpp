class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
        vector<int> B(A.size(),1);//设置vector大小与初值
        if(A.empty())
            return B;
        for(int i=0;i<B.size();i++){
            for(int j=0;j<A.size();j++){
                if(j!=i)
                    B[i]*=A[j];
            }
        }
        return B;
    }
};