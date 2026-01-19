class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> ans;
        int i = 0;
        while(i < s.size()) {
            char ch = s[i];
            int j = i+1, cnt = 1;
            while(j < s.size() && ch == s[j]) {
                cnt++;
                j++;
            }
            if(cnt >= 3) {
                ans.push_back({i, j-1});
            }
            i = j;
        }
        return ans;
    }
};
