class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        double maxAvg = INT_MIN;
        for(int i = 0; i < k; ++i) {
            sum += nums[i];
            // cout << "i " << i << " sum " << sum << endl;
        }
        double avg = (double)sum / (double)k;
        // cout << "Avg " << avg << endl;
        maxAvg = max(maxAvg, avg);
        // cout << "MAXAvg " << maxAvg << endl;
        for(int i = k; i < nums.size(); ++i) {
            sum += (nums[i] - nums[i - k]);
            // cout << "i " << i << " sum " << sum << endl;
            avg = (double)sum / (double)k;
            // cout << "Avg " << avg << endl;
            maxAvg = max(maxAvg, avg);
            // cout << "MAXAvg " << maxAvg << endl;
        }
        return maxAvg;
    }
};
