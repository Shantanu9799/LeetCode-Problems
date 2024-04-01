class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;
        sort(heights.begin(), heights.end());
        int unexpected = 0;
        for(int i = 0; i < heights.size(); i++) {
            unexpected += (!(heights[i] == expected[i]));
        }
        return unexpected;
    }
};