//给定一个数组和滑动窗口的大小，找出所有滑动窗口里数值的最大值
class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
        vector<int> res;
        //记得判断特殊情况
        if(size>num.size()||num.empty()||size<1)  
            return res;
        for(int i=0;i<=num.size()-size;i++){
            int max=num[i];
            //对每个滑动窗口求值
            for(int j=i;j<=i+size-1;j++){
                if(num[j]>max)
                    max=num[j];
            }
            res.push_back(max);
        }
        return res;
    }
};