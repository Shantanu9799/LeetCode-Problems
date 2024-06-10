class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long concatenationValue = 0;
        int i = 0, j = nums.size() - 1;
        while(i <= j) {
            string s = i == j ? to_string(nums[i]) : to_string(nums[i]) + to_string(nums[j]);
            concatenationValue += stoi(s);
            i++; j--;
        }
        return concatenationValue;
    }
};