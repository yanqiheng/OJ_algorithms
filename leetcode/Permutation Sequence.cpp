class Solution {
public:
    string getPermutation(int n, int k) {
        string res(n,'0'); //n个数有n位，并且每个位数字为0       
        //全排序的第一个数
        for(int i=0;i<n;i++)
            res[i]+=i+1; 
        //全排序的第k个，也就是求k-1次的next_permutation
        for(int i=0;i<k-1;i++)
            next_permutation(res.begin(), res.end());
        return res;
    }
};