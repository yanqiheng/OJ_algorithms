class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        int low=1,high=2;//双指针设置连续正数数列的一个首指针，一个尾指针
        vector<vector<int> > Res;//最后总的结果
        while(low<high){////当总和小于sum，大指针继续+,否则小指针+
            int cur=(high + low) * (high - low + 1) / 2;
            if(cur<sum){
                high++;
                continue;
            }
            if(cur>sum){
                low++;
                continue;
            }
                
            else{
                vector<int> res;
                for(int i=low;i<=high;i++)
                    res.push_back(i);
                Res.push_back(res);
                low++;//这步更新别忘了
                continue;//每次更新指针后中断返回while继续判断
            }
        }
        return Res;
    }
};