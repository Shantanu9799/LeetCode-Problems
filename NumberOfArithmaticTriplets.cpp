class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int numOfTriplets = 0;
        for(int i = 0; i <= nums.size()-3; i++) {
            int f = nums[i];
            bool sec = false, third = false;
            int j = i+1;
            for(; j < nums.size(); j++) {
                if(nums[j] == f + diff) {
                    sec = true;
                    break;
                }
            }
            if(sec == true) {
                for(int k = j+1; k < nums.size(); k++) {
                    if(nums[k] == f + diff + diff) {
                        third = true;
                        break;
                    }
                }
            }
            if(sec && third) numOfTriplets++;
        }
        return numOfTriplets;
    }
};

