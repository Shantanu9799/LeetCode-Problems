class Solution {
public:

    pair<int, int> maxAndSecondMax(vector<int>& nums) {
        int maxi = 0, secondMaxi = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > maxi) {
                secondMaxi = maxi;
                maxi = nums[i];
            } else if(nums[i]<=maxi && nums[i]>secondMaxi) {
                secondMaxi = nums[i];
            }
        } 
        return {maxi, secondMaxi};
    }

    pair<int, int> minAndSecondMin(vector<int>& nums) {
        int mini = INT_MAX, secondMini = INT_MAX;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] < mini) {
                secondMini = mini;
                mini = nums[i];
            } else if(nums[i]>=mini && nums[i]<secondMini) {
                secondMini = nums[i];
            }
        } 
        return {mini, secondMini};
    }

    int maxProductDifference(vector<int>& nums) {
        pair<int, int> maxis = maxAndSecondMax(nums);
        cout << maxis.first << " " << maxis.first << endl;
        pair<int, int> minis = minAndSecondMin(nums);
        cout << minis.first << " " << minis.first << endl;
        return ((maxis.first * maxis.second) - (minis.first * minis.second));
    }
};