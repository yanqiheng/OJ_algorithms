class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        int low=0,high=array.size()-1;
        vector<int> result;
        while(low<high){
            if(array[low]+array[high]==sum){
                result.push_back(array[low]);
                result.push_back(array[high]);
                break;
            }
            while(array[low]+array[high]<sum){
                low++;
                continue;
            }
            while(array[low]+array[high]>sum){
                high--;
                continue;
            }
        }
        return result;
    }
};