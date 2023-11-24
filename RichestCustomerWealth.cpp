class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int RichestWealth = INT_MIN;
        int m = accounts.size();
        int n = accounts[0].size();
        for(int i = 0; i < m; i++) {
            int CustomerWealth = 0;
            for(int j = 0; j < n; j++) {
                CustomerWealth += accounts[i][j];
            }
            RichestWealth = max(RichestWealth, CustomerWealth);
        }
        return RichestWealth;
    }
};