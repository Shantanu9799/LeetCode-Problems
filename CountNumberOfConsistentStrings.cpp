class Solution {
public:
    bool isConsistent(string allowed, string word) {
        vector<int> freq(26, 0);
        for(int i = 0; i < allowed.size(); i++) {
            freq[allowed[i] - 'a'] = 1;
        }
        for(int i = 0; i < word.size(); i++) {
            if(freq[word[i] - 'a'] == 0) return false;
        }
        return true;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        int consistentStringCount = 0;
        for(string word : words) {
            if(isConsistent(allowed, word)) consistentStringCount++;
        }
        return consistentStringCount;
    }
};