class Solution {
public:
    vector<int> res;
    void Insert(int num)
    {
        res.push_back(num);
    }

    double GetMedian()
    {
        sort(res.begin(),res.end());
        int size=res.size();
        if(size%2!=0){
            return res[size/2];
        }
        else{
            return (res[size/2]+res[size/2-1])/2.00;
        }
    }

};