class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0, i = num1.size() - 1, j = num2.size() - 1;
        string sum = "";
        while(i >= 0 && j >= 0) {
            // find the right most digits
            int num1Digit = num1[i] - '0';
            int num2Digit = num2[j] - '0';
            // figure out the current sum by adding both and the carry
            int currentSum = num1Digit + num2Digit + carry;
            // carry -> 16 / 10 -> 1 carry(e.g.)
            carry = currentSum / 10;
            // the sum digit will be 16 % 10 -> 6(e.g.) 
            int rem = currentSum % 10;
            // add the digit
            sum.push_back(char('0' + rem));

            i--; j--;
        }
        // loop will end once one of the string is empty
        // if num2 is empty now, add all the element of num1
        while(i >= 0) {
            int num1Digit = num1[i] - '0';
            // figure out the current sum by adding both and the carry
            int currentSum = num1Digit + carry;
            // carry -> 16 / 10 -> 1 carry(e.g.)
            carry = currentSum / 10;
            // the sum digit will be 16 % 10 -> 6(e.g.) 
            int rem = currentSum % 10;
            // add the digit
            sum.push_back(char('0' + rem));
            i--;
        }
        // if num1 is empty now, add all the element of num1
        while(j >= 0) {
            int num2Digit = num2[j] - '0';
            // figure out the current sum by adding both and the carry
            int currentSum = num2Digit + carry;
            // carry -> 16 / 10 -> 1 carry(e.g.)
            carry = currentSum / 10;
            // the sum digit will be 16 % 10 -> 6(e.g.) 
            int rem = currentSum % 10;
            // add the digit
            sum.push_back(char('0' + rem));
            j--;
        }
        if (carry) sum.push_back(char('0' + carry)); // if we have carry = 1 at last, add it
        reverse(sum.begin(), sum.end());
        return sum;
    }
};
