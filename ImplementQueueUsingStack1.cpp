class MyQueue {
// SC - O(n + n) => O(2n)
private:
    stack<int> st1, st2;

public:
    MyQueue() {
        
    }
    // TC - O(1)
    void push(int x) {
        // simply push the value into the stack1
        st1.push(x);
    }
    // TC - O(n)
    int pop() {
        // if the stack2 is not empty, then return the top value and pop
        if(!st2.empty()) {
            int data = st2.top();
            st2.pop();
            return data;
        }
        // else, put all the elements to stack2 from stack1;
        while(!st1.empty()) {
            st2.push(st1.top());
            st1.pop();
        }
        int data = st2.top();
        st2.pop();
        return data;
    }
    // TC - O(n)
    int peek() {
        // if the stack2 is not empty, then return the top value
        if(!st2.empty()) {
            int data = st2.top();
            return data;
        }
        // else, put all the elements to stack2 from stack1;
        while(!st1.empty()) {
            st2.push(st1.top());
            st1.pop();
        }
        int data = st2.top();
        return data;
    }
    // TC - O(1)
    bool empty() {
        return (st1.empty() && st2.empty());
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
