class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> numsArray(nums.size());
        for(int i = 0; i < nums.size(); i++) {
            numsArray[i] = nums[nums[i]]; 
        }
        return numsArray;
    }
};