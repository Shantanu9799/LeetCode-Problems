class Solution {
    public int singleNumber(int[] nums) {
        int xor = 0;
        for(int i=0; i<nums.length; i++) {
            xor ^= nums[i];
        }
        return xor;
    }
}

// cpp code 
class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int ans = 0;
            for(auto it : nums) {
                ans ^= it;
            }
            return ans;
        }
};