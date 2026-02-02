class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> result;
        int i = num.size() - 1;
        int carry = 0;

        while (i >= 0 || k > 0 || carry) {
            int nDigit = (i >= 0 ? num[i] : 0);
            int kDigit = k % 10;

            int sum = nDigit + kDigit + carry;
            result.push_back(sum % 10);
            carry = sum / 10;

            if (i >= 0) --i;
            k /= 10;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
