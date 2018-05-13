//在一条环路上有N个加油站
//其中第i个加油站有汽油gas[i]，并且从第i个加油站前往第i+1个加油站需要消耗汽油cost[i]
class Solution {
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        int now=0,total=0;
        int res=-1;
        for(int i=0;i<gas.size();i++){
            now+=gas[i]-cost[i];
            total+=gas[i]-cost[i];
            if(now<0){
                now=0;
                res=i;
            }
        }
        return total>=0? res+1:-1;
    }
};