class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        for(int i = 0; i < n; i += 2*k) {
            int lastIdx = min(i+k, n);
            reverse(s.begin()+i, s.begin()+lastIdx);
        }
        return s;
    }
};
