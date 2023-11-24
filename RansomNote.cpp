class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ch[26] = {0};
        for(int i = 0; i < magazine.length(); i++) {
            ch[magazine[i] - 'a']++;
        }
        for(int i = 0; i < ransomNote.length(); i++) {
            if(ch[ransomNote[i] - 'a'] > 0) ch[ransomNote[i] - 'a']--;
            else return false;
        }
        return true;
    }
};