class Solution {
public:

    pair<int, int> maxSecondMaxi(vector<int> nums) {
        int maxi = INT_MIN, secMaxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > maxi) {
                secMaxi = maxi;
                maxi = nums[i];
            } else if(nums[i] > secMaxi) {
                secMaxi = nums[i];
            }
        }
        return {maxi, secMaxi};
    }

    int maxProduct(vector<int>& nums) {
        pair<int, int> p = maxSecondMaxi(nums);
        return (p.first - 1) * (p.second - 1);
    }
};