//采用阵地攻守的思想：
//第一个数字作为第一个士兵，守阵地；count = 1；
//遇到相同元素，count++;
//遇到不相同元素，即为敌人，同归于尽,count--；当遇到count为0的情况，又以新的i值作为守阵地的士兵，继续下去，到最后还留在阵地上的士兵，有可能是主元素。
//再加一次循环，记录这个士兵的个数看是否大于数组一般即可。
class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        if(numbers.size()==0) return 0;
        int result=numbers[0];//第一个数字
        int times=1;//出现的次数为1
        for(int i=1;i<numbers.size();i++){
            if(numbers[i]==result) times++;
            else
                times--;
            if(times==0){
                result=numbers[i];
                times=1;
            }
        }
        times=0;
        for(int i=0;i<numbers.size();i++){
            if(numbers[i]==result) times++;
        }
        if(times*2>numbers.size()) return result;
        else return 0; 
    }
};