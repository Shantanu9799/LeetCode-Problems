class Solution {
public:
    string clearDigits(string st) {
        stack<char> s;
        for(int i = 0; i < st.size(); ++i) {
            if(st[i]>='a' && st[i]<='z') s.push(st[i]);
            else s.pop();
        }
        st = "";
        while(!s.empty()) {
            st += s.top();
            s.pop();
        }
        reverse(st.begin(), st.end());
        return st;
    }
};