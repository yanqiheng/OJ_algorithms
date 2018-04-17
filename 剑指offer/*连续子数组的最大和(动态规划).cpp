//使用动态规划
//F（i）：以array[i]为末尾元素的子数组的和的最大值，子数组的元素的相对位置不变
//F（i）=max（F（i-1）+array[i] ， array[i]）
//res：所有子数组的和的最大值
//res=max（res，F（i））
class Solution {
public:    
    int FindGreatestSumOfSubArray(vector<int> array) {
        if(array.size()==0) return 0;
        int res=array[0];//所有子数组的和的最大值
        int max=array[0];//以array[i]为末尾元素的子数组的和的最大值
        for(int i=1;i<array.size();i++){
            max=(max+array[i]>array[i]) ? max+array[i]:array[i];
            res=(max>res)? max: res;
        }
        return res;
    }
};