class Solution
{
public:
    string str;
    map<int,int>count;
  //Insert one char from stringstream
    void Insert(char ch)
    {
        str+=ch;
        count[ch]++;
        return;
    }
  //return the first appearence once char in current stringstream
    char FirstAppearingOnce()
    {
        for(int i=0;i<str.size();i++){
            if(count[str[i]]==1)
                return str[i];
        }
        return '#';
    }

};