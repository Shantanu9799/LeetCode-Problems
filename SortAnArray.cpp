class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int, int> mpp;
        for(auto it : nums) mpp[it]++;
        int idx = 0;
        for(auto it : mpp) {
            int t = it.second;
            while(t--) {
                nums[idx++] = it.first;
            }
        }
        return nums;
    }
};