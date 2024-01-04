class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int freq[26] = {};
        for(int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
        }
        set<int> SET;
        for(int i = 0; i < 26; i++) {
            if(freq[i] != 0) SET.insert(freq[i]);
        }

        return SET.size()==1;
    }
};