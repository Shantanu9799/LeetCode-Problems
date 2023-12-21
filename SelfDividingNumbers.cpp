class Solution {
public:

    bool isSelfDiv(int x) {
        int tmp = x;
        while(tmp) {
            int digit = tmp%10;
            if(digit == 0 || x%digit != 0) return false;
            tmp /= 10; 
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> numbers;
        for(int i = left; i <= right; i++) {
            if(isSelfDiv(i)) numbers.push_back(i);
        }
        return numbers;
    }
};