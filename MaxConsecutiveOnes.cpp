class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maximumOnes = 0;
        int numberOfOnes = 0;
        for(auto it : nums) {
            if(it == 1) {
                numberOfOnes++;
            } else {
                numberOfOnes = 0;
            }
            maximumOnes = max(maximumOnes, numberOfOnes);
        }
        return maximumOnes;
    }
};