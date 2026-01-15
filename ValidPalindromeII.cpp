class Solution {
private:
    bool isPalindrome(string s, int f, int l) {
        while(f < l) {
            if(s[f] != s[l]) return false;
            f++;
            l--;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        while(left < right) {
            if(s[left] != s[right]) return isPalindrome(s, left+1, right) || isPalindrome(s, left, right-1);
            left++;
            right--;
        }
        return true;
    }
};
