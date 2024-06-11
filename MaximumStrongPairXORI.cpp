class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int maxXOR = INT_MIN, n = nums.size();
        for(int i = 0; i < n; ++i) {
            int x = nums[i];
            for(int j = i; j < n; ++j) {
                int y = nums[j];
                if(abs(x-y) <= min(x, y)) {
                    maxXOR = max(maxXOR, x ^ y);
                }
            }
        }
        return maxXOR;
    }
};