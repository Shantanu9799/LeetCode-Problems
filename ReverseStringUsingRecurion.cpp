class Solution {
public:
    void reverseHelper(vector<char> &s, int i, int j) {
        if(i >= j) return;
        swap(s[i], s[j]);
        return reverseHelper(s, i+1, j-1);
    }
    void reverseString(vector<char>& s) {
        return reverseHelper(s, 0, s.size()-1);
    }
};