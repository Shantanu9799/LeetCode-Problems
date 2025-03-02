class MyStack {

private:
    queue<int> q;

public:
    MyStack() {
        
    }
    
    void push(int x) {
        // first add the element in thw queue
        q.push(x);
        int size = q.size();
        // reversing the queue as queue follows FIFO
        // but stack follows the LIFO
        for(int i = 1; i < size; ++i) {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        //colleting the front element of the queue
        int data = q.front();
        // popping the front element from the queue
        q.pop();
        // return the collected data
        return data;
    }
    
    int top() {
        // return the top element of the queue
        return q.front();
    }
    
    bool empty() {
        // return the value get from empty() function
        // which is basically checking that any element present inside the queue
        return q.empty();
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
