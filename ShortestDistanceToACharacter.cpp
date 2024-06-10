class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> occurenceOfC;
        for(int i = 0; i < n; ++i) {
            if(s[i] == c) occurenceOfC.push_back(i);
        }
        vector<int> dis(n, 0);
        for(int i = 0; i < n; ++i) {
            int minDiff = abs(occurenceOfC[0] - i);
            for(int j = 1; j < occurenceOfC.size(); ++j) {
                minDiff = min(minDiff, abs(occurenceOfC[j] - i));
            }
            dis[i] = minDiff;
        }
        return dis;
    }
};