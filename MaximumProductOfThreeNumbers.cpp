class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // Track top 3 maxima and bottom 2 minima
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        int min1 = INT_MAX, min2 = INT_MAX;

        for (int x : nums) {
            // Update maxima
            if (x > max1) {
                max3 = max2;
                max2 = max1;
                max1 = x;
            } else if (x > max2) {
                max3 = max2;
                max2 = x;
            } else if (x > max3) {
                max3 = x;
            }

            // Update minima
            if (x < min1) {
                min2 = min1;
                min1 = x;
            } else if (x < min2) {
                min2 = x;
            }
        }

        long long prodA = 1LL * max1 * max2 * max3;
        long long prodB = 1LL * max1 * min1 * min2;
        // Cast back to int since LeetCode expects int and constraints are safe
        return (prodA > prodB) ? (int)prodA : (int)prodB;
    }
};
