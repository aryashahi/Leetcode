class MyStack {
public:
    deque <int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push_front(x);
    }
    
    int pop() {
        int x = q.front();
        q.pop_front();
        return x;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};