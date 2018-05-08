class Solution {
public:
    int longestConsecutive(vector<int> &num) {
        map<int,bool> state;
        int longest=0;
        if(num.size()==0)
            return longest;
        for(int i=0;i<num.size();i++)
            state[num[i]]=false;
        for(int i=0;i<num.size();i++){
            if(state[num[i]])
                continue;
            int length=1;//当前最大序列长度
            state[num[i]]=true;
            for(int j=num[i]+1;state.find(j)!=state.end();j++){
                length++;
                state[j]=true;
            }
            for(int j=num[i]-1;state.find(j)!=state.end();j--){
                length++;
                state[j]=true;
            }
            longest=max(length,longest);//更新下总最长序列长度
        }
        return longest;
    }
};