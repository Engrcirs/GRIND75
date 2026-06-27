class MyQueue {
private:
    std::stack<int> s1;
    std::stack<int>s2;

    void transferIfEmpty(){
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
    }
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        transferIfEmpty();
        int oldest = s2.top();
        s2.pop();
        return oldest;
    }
    
    int peek() {
        transferIfEmpty();
        return s2.top();
    }
    
    bool empty() {
        return s1.empty() and s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */