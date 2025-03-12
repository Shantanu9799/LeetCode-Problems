#include <stack>
#include <climits>

class MinStack {
private:
    std::stack<long long> st;  // Use long long to prevent overflow
    long long mini;  // Store min as long long

public:
    MinStack() {
        mini = LLONG_MAX;  // Use long long max
    }

    void push(int val) {
        long long value = val;
        if (st.empty()) {
            mini = value;
            st.push(value);
        } else if (value > mini) {
            st.push(value);
        } else {
            // Store modified value to keep track of min
            st.push(2 * value - mini);
            mini = value;
        }
    }

    void pop() {
        if (st.empty()) return;
        long long topVal = st.top();
        st.pop();
        if (topVal < mini) {
            mini = 2 * mini - topVal;
        }
        if (st.empty()) {
            mini = LLONG_MAX; // Reset mini when stack is empty
        }
    }

    int top() {
        if (st.empty()) return -1;
        long long topVal = st.top();
        return (topVal < mini) ? mini : topVal;
    }

    int getMin() {
        return mini;
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
