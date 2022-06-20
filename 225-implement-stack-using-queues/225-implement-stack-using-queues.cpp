class MyStack {
public:
    queue<int>q1, q2;
    
    
    MyStack() {
        
    }
    
    void push(int x) {
        q2.push(x);
        int n=q1.size();
        for(int i=1;i<=n;i++)
        {
            q2.push(q1.front());
            q1.pop();
                
        }int m = q2.size();
        for(int i=1;i<=m;i++)
        {
            q1.push(q2.front());
            q2.pop();
        }
        
    }
    
    int pop() {
        int x=q1.front();
        q1.pop();
        return x;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        if(q1.size()==0)
            return true;
        else
            return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */