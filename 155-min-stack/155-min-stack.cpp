class MinStack {
public:
       vector<int> v;
       vector<int> min;
    MinStack() {
    min.push_back(INT_MAX);
    }
    
    void push(int val) {
        v.push_back(val);
        if(val<min.back())
            min.push_back(val);
        else
            min.push_back(min.back());
        
    }
    
    void pop() {
        v.pop_back();
        min.pop_back();
    }
    
    int top() {
       return v.back();
    }
    
    int getMin() {
        return min.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */