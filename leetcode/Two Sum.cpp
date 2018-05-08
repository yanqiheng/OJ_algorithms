class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> res;
        if(numbers.empty())
            return res;
        map<int,int> m;//记录每个数组的标号
        for(int i=0;i<numbers.size();i++)
            m[numbers[i]]=i;
        for(int i=0;i<numbers.size();i++){
            int gap=target-numbers[i];
            if (m.find(gap) != m.end() && m[gap] > i){//保证索引是一大一小
                res.push_back(i+1);//索引是从0起
                res.push_back(m[gap]+1);
                return res;
            }
        }
        return res;
    }
};