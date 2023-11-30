class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size = nums.size()-1;
        vector<int> squareArray(size+1);
        int i = 0, j = size;
        while(i <= j) {
            if((nums[i]*nums[i]) > (nums[j]*nums[j])) {
                squareArray[size--] = nums[i] * nums[i];
                i++;
            } else {
                squareArray[size--] = nums[j] * nums[j];
                j--;
            }
        }
        return squareArray;
    }
};