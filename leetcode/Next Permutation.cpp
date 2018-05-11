//思路：从数组的最后一位开始往前查找，找第一个不是升序的数字，记下位置p,然后从最后开始查找
//查到第一个比该数字大的数字，这两个数字交换后，将位置p之后的元素做倒序
class Solution {
public:
    void nextPermutation(vector<int> &num) {
        int i=num.size()-2;
        while(i>=0&&num[i]>=num[i+1])
            i--;
        if(i>=0){
            int j=num.size()-1;
            while(j>i&&num[j]<=num[i])
                j--;
            swap(num[j],num[i]);
        }
        reverse(num.begin()+i+1,num.end());
        return;
    }
};