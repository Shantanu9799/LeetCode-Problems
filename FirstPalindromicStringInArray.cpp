class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(string st : words) {

            bool flag = true;

            int s = 0, e = st.length() - 1;
            while(s < e) {
                if(st[s] != st[e]) {
                    flag = false;
                    break;
                }
                s++; e--;
            }

            if(flag) return st;

        }

        return "";
    }
};