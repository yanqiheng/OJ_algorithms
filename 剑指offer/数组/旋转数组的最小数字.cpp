class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if(rotateArray.size()==0) return 0;
        for(int i=0;i<rotateArray.size();i++){
            if(rotateArray[i]<rotateArray[i-1]) return rotateArray[i];
        }
        return rotateArray[0];
    }
};