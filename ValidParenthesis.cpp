class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i = 0; i < s.size(); ++i) {
            char bracket = s[i];
            if(bracket=='(' || bracket=='{' || bracket=='[') st.push(bracket);
            else {
                if(st.empty()) return false;
                if((st.top()=='(' && bracket==')') || (st.top()=='{' && bracket=='}') || (st.top()=='[' && bracket==']')) st.pop();
                else return false;
            }
        }
        return st.empty();
    }
};
