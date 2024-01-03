class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i = 0;
        while(word[i] != ch) {
            if(i == word.size()) return word;
            i++;
        }
        int j = 0;
        while(j < i) {
            swap(word[j], word[i]);
            j++; i--;
        }
        return word;
    }
};