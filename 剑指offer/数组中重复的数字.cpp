class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
        map<int,int>count;
        if(!numbers)
            return false;
        for(int i=0;i<length;count[numbers[i++]]++);
        for(int i=0;i<length;i++){
            if(count[numbers[i]]>1){
                *duplication=numbers[i];
                return true;
            }
            continue;
        }
        return false;
    }
};