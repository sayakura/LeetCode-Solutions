/* ***************************************************************************
 * File    : 155_Min_Stack.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/08
 * Updated : 2018/10/08
 * ***************************************************************************/
class MinStack {
private:
    std::stack<int> stack;
    std::stack<int> min_stack;
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    void push(int x) {
        stack.push(x);
        if (min_stack.empty() || x <= min_stack.top())
            min_stack.push(x);
    }
    
    void pop() {
        if (stack.top() == min_stack.top())
            min_stack.pop();
        stack.pop();  
    }
    
    int top() {
        return stack.top();
    }
    
    int getMin() {
        return min_stack.top();
    }
};

