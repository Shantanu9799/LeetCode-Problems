// Approach 1
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int i = 0, n = strs[0].size(), m = strs[strs.size() - 1].size();
        string firstString = strs[0], lastString = strs[strs.size() - 1], longCommonPref = "";
        while(i < n && i < m) {
            if(firstString[i] == lastString[i]) longCommonPref += firstString[i];
            else break;
            i++;
        }
        return longCommonPref;
    }
};



// Approach 2
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
