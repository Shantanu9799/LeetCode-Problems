class Solution {
public:
    bool detectCapitalUse(string word) {
        int capitalCount = 0;
        for(int i = 0; i < word.size(); ++i) {
            if(word[i]>='A' && word[i]<='Z') capitalCount++;
        }
        // cout << capitalCount << endl;
        if((capitalCount == word.size()) || (capitalCount == 1 && (word[0]>='A' && word[0]<='Z')) || capitalCount == 0) return true;
        return false;
    }
};
