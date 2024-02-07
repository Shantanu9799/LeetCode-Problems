class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // calculating the total sum of the list
        int calculatedSum = 0;
        for(auto it : nums) {
            calculatedSum += it;
        }
        // calculate the actual sum which should came up
        int n = nums.size();
        int actualSum = (n * (n+1)) / 2;
        // subtracting two values to find the missing number
        return actualSum-calculatedSum;
    }
};