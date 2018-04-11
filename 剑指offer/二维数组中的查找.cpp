class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int i=0,j=array[0].size()-1;
        while(i<=array.size()-1&&j>=0){
            if(target==array[i][j]) return true;
            if(target>array[i][j]){
            	i++;
            	continue;
            }
            if(target<array[i][j]){
            	j--;
            	continue;
            }
        }
        return false;
    }
};