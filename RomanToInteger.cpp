class Solution {
public:
    int romanToInt(string s) {
        // symbol with corresponding values
        unordered_map<char, int> mpp = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        // traverse through the whole string
        int sum = 0, index = 0, n = s.size();
        while(index < n-1) {
            // if current index value is less than or not from the next element value
            // if less then sum -= value
            if(mpp[s[index]] < mpp[s[index+1]]) sum -= mpp[s[index]];
            else sum += mpp[s[index]];
            // increase the value of index
            index++;
        }
        // add the last element value
        sum += mpp[s[index]];
        return sum;
    }
};
