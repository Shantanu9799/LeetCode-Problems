class Solution {
public:
    char repeatedCharacter(string s) {
        int freq[26] = {0};
        for(int i = 0; i < s.size(); ++i) {
            if(freq[s[i] - 'a'] == 1) return s[i];
            freq[s[i] - 'a']++;
        }
        return '#';
    }
};