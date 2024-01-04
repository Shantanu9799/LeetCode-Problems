class Solution {
public:

    bool isGood(string x) {
        return ((x[0]!=x[1]) && (x[0]!=x[2]) && (x[1]!=x[2]));
    }

    int countGoodSubstrings(string s) {
        if(s.size() < 3) return 0;
        int cnt = 0;
        for(int i = 0; i <= s.size()-3; i++) {
            string sub = s.substr(i, 3);
            if(isGood(sub)) cnt++;
        }
        return cnt;
    }
};