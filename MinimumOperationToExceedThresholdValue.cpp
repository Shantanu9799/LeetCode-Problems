class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int operation = 0;
        for(int it : nums) {
            if(nums < k) operation++;
        }
        return operation;
    }
};