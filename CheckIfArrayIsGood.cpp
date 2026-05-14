class Solution {
public:
    bool isGood(vector<int>& nums) {
        // maximum element
        int maxElem = nums[0];
        for(int it : nums) {
            maxElem = max(maxElem, it);
        }
        // create a array size maximum+1
        vector<int> perm(maxElem + 1, 0);
        for(int it : nums) {
            perm[it]++;
        }
        // check if it is the permutation
        for(int i = 1; i <= maxElem; ++i) {
            if(i == maxElem) {
                if(perm[i] != 2) return false;
            } else {
                if(perm[i] != 1) return false;
            }
        }
        return true;
    }
};
