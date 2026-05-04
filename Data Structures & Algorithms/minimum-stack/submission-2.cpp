class MinStack {
public:
    stack<int> stk1;
    stack<int> stk2;
    MinStack() {
        
    }
    
    void push(int val) {
        stk1.push(val);
        if(stk2.empty()){
            stk2.push(val);
        }
        else{
            stk2.push(min(stk1.top(),stk2.top()));
        }
    }
    
    void pop() {
        stk1.pop();
        stk2.pop();
    }
    
    int top() {
        return stk1.top();
    }
    
    int getMin() {
        return stk2.top();
    }
};
