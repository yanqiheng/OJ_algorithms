class Solution {
public:
    int trap(int A[], int n) {
        if(n==0)
            return 0;
        int max=0;
        //最高的柱子将数组分成两半
        for(int i=0;i<n;i++){
            if(A[i]>A[max])
                max=i;
        }
        int water=0;
        //设置一个最高为high，分别遍历两边，比high小可蓄水，比high大则更新high值不可以蓄水
        for(int i=0,high=0;i<max;i++){
            if(A[i]>high)
                high=A[i];
            else
                water+=high-A[i];
        }
        for(int i=n-1,high=0;i>max;i--){
            if(A[i]>high)
                high=A[i];
            else
                water+=high-A[i];
        }
        return water;
    }
};