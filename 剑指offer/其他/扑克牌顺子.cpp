/*顺子满足的条件：max-min<5;除0外其他的数字都不能重复；传入的数组放5个元素*/
class Solution {
public:
    bool IsContinuous( vector<int> numbers ) {
        if(numbers.empty()) return false;
        map<int,int> count;//存储每个数出现的次数
        int i=0;
        int min=14;
        int max=-1;
        while(i<numbers.size()){
            count[numbers[i]]++;
            if(numbers[i]==0){
                i++;
                continue;
            }
            if(count[numbers[i]]>1)
                return false;
            if(numbers[i]>max)
                max=numbers[i];
            if(numbers[i]<min)
                min=numbers[i];
            i++;
            continue;
        }
        if(max-min<5) //可以用4张大小王来弥补
            return true;
        return false;
    }
};