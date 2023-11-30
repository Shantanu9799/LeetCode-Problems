class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int digitCount = 0;
            while(num) {
                digitCount++;
                num /= 10;
            }
            if(!(digitCount & 1)) cnt++;
        }
        return cnt;
    }
};