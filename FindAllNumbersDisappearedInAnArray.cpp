class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> disappearedNumbers;
        vector<int> isAppeared(n+1, 0);
        for(int it : nums) {
            isAppeared[it] = 1;
        }
        for(int i = 1; i <= n; i++) {
            if(isAppeared[i] == 0) disappearedNumbers.push_back(i);
        }
        return disappearedNumbers;
    }
};
