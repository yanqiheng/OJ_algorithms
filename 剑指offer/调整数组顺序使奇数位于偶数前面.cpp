class Solution {
public:
    void reOrderArray(vector<int> &array) {
        if(array.size()==0) return;
        int arrayhelp[array.size()];
        int j=0;//新数组序号
        for(int i=0;i<array.size();i++){
            if(array[i]%2==1) arrayhelp[j++]=array[i];
        }
        for(int i=0;i<array.size();i++){
            if(array[i]%2==0) arrayhelp[j++]=array[i];
        }
        for(int i=0;i<array.size();i++){
            array[i]=arrayhelp[i];
        }
        return;
    }
};