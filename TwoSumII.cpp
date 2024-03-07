class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int f = 0, s = numbers.size() - 1;
        while(f < s) {
            if(numbers[f] + numbers[s] == target) return {f+1, s+1};
            else if(numbers[f] + numbers[s] > target) s--;
            else f++;
        }
        return {-1, -1};
    }
};