class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxi = nums[0], mini = nums[0];
        for(int it : nums) {
            maxi = max(maxi, it);
            mini = min(mini, it);
        }
        if((mini + k) >= (maxi - k)) return 0;
        return (maxi - k) - (mini + k);
    }
};
