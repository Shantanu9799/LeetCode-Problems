class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longCommonPref = "";
        // traverse the first string
        for(int i = 0; i < strs[0].size(); ++i) {
            char ch = strs[0][i];
            bool match = true;
            // traverse through all rest elemets characters
            for(int j = 1; j < strs.size(); ++j) {
                // check the size first that current array element have elements in that index
                // and it matches with the first charcter elements
                if(strs[j][i] != ch) match = false;
            }
            if(match) longCommonPref += ch;
            else break;
        }
        return longCommonPref;
    }
};
