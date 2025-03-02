class MyQueue {

// SC - O(n + n) => O(2n)
private:
    stack<int> st1, st2;

public:
    MyQueue() {
        
    }
    // TC - O(2n)
    void push(int x) {
        // first move all the elements from stack1 to stack2
        while(!st1.empty()) {
            st2.push(st1.top());
            st1.pop();
        }
        // secondly, now add the new element into the stack1
        st1.push(x);
        // lastly, again add all the elements from stack2 to stack1
        while(!st2.empty()) {
            st1.push(st2.top());
            st2.pop();
        }
    }
    // TC - O(1)
    int pop() {
        int data = st1.top();
        st1.pop();
        return data;
    }
    // TC - O(1)
    int peek() {
        int data = st1.top();
        return data;
    }
    // TC - O(1)
    bool empty() {
        return st1.empty();
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
