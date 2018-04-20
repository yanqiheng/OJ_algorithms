//对vector容器内的数据进行排序，按照 将a和b转为string后,若 a＋b<b+a,则a排在在前的规则排序,
//如 2 21 因为 212 < 221 所以 排序后为 21 2 
//to_string() 可以将int 转化为string

class Solution {
public:
    static bool cmp(int a,int b){//定义排序规则
        string A=to_string(a)+to_string(b);
        string B=to_string(b)+to_string(a);
        return A<B;
    }
    string PrintMinNumber(vector<int> numbers) {
        string res;
        if(numbers.size()==0) return res;
        sort(numbers.begin(),numbers.end(),cmp);//按照规则排好序
        for(int i=0;i<numbers.size();i++){
            res+=to_string(numbers[i]);
        }
        return res;
    }
};