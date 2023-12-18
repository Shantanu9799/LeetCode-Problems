class Solution {
public:

    int differenceOfSum(vector<int>& nums) {
        int ElementSum = 0, DigitSum = 0;
        for(int it : nums) {
            ElementSum += it;
            int dg = 0;
            while(it) {
                dg += it%10;
                it /= 10;
            }
            DigitSum += dg;
        }
        return abs(ElementSum - DigitSum);
    }
};