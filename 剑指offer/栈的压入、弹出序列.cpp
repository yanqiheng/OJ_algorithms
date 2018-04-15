class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {//pushV入栈顺序 popV出栈顺序
        if(pushV.empty()||popV.empty()||pushV.size()!=popV.size()) return false;
        int i=0,j=0;
        stack<int> S;//辅助栈
        for(i;i<pushV.size();i++){
            S.push(pushV[i]);
            while(!S.empty()&&S.top()==popV[j]){
                S.pop();
                j++;
            }
        }
        if(S.empty()) return true;
        return false;
    }
};