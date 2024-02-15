class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> conver;
        long long maxi = 0, sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(maxi < nums[i]) {
                maxi = nums[i];
            }
            sum = sum + nums[i] + maxi;
            conver.push_back(sum);
        }
        return conver;
    }
};