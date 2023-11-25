class Solution {
public:
    bool isPresent(string s, char x) {
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == x) return true;
        }
        return false;
    }
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> index;
        for(int i = 0; i < words.size(); i++) {
            if(isPresent(words[i], x)) index.push_back(i);
        }
        return index;
    }
};