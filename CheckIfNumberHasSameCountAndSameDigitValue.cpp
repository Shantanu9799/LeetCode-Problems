class Solution {
public:
    bool digitCount(string num) {
        int n = num.size();
        std::vector<int> freq(10, 0);  // Frequency array for digits 0-9
        
        // Count the frequency of each digit in the input string
        for (char c : num) {
            freq[c - '0']++;
        }
        
        // Check if the frequency matches the digit at each position
        for (int i = 0; i < n; ++i) {
            if (num[i] - '0' != freq[i]) return false;
        }
        
        return true;
    }
};