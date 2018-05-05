class Solution {
public:
    double Power(double base, int exponent) {
        if(exponent==0) return 1;
        if(exponent>0){
            int res=1;
            for(int i=0;i<exponent;i++){
                res*=base;
            }
            return res;
        }
        else{
            double res=1;
            for(int i=0;i<-exponent;i++){
                res*=base;
            }   
            return 1/res;
        }
    }
};