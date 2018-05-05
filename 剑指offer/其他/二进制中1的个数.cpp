class Solution {
public:
     int  NumberOf1(int n) {
         int num=0,flag=1;
         while(flag){
             if(flag&n) num++;
             flag=flag<<1;
         }
         return num;
     }
};