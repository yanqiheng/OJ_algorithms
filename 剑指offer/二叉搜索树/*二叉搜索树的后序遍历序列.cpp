class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        if(sequence.size()==0) return false;
        int n=sequence.size()-1;
        int i=0;
        while(n){
            while(sequence[i]<sequence[n]) i++;
            while(sequence[i]>sequence[n]) i++;
            if(i<n) return false;
            i=0;
            n--;
            continue;
        }
        return true;
    }
};