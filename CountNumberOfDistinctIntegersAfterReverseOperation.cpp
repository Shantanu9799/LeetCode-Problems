class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        set<int> s;
        for(int i = 0; i < n; i++) {
            s.insert(nums[i]);
            int reverse = 0;
            while(nums[i]) {
                reverse = (reverse * 10) + (nums[i] % 10);
                nums[i] /= 10;
            }
            s.insert(reverse);
        }

        return s.size();
    }
};