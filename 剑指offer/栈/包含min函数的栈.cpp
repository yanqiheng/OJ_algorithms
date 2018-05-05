class Solution {
public:
    stack<int>stack1,stack2;//设置栈二为辅助栈，栈顶保存最小值
    void push(int value) {
        stack1.push(value);
        if(stack2.empty()) stack2.push(value);
        else{
            if(value<stack2.top()) stack2.push(value);
        }
    }
    void pop() {
        if(stack1.top()==stack2.top()){
            stack1.pop();
            stack2.pop();
        }
        else{
            stack1.pop();
        }
    }
    int top() {
        return stack1.top();
    }
    int min() {
        return stack2.top();
    }
};