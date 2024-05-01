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





class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx = -1;
        for(int i = 0; i < word.size(); ++i) {
            if(word[i] == ch) {
                idx = i;
                break;
            }
        }
        if(idx == -1) return word;
        string revPref = word.substr(0, idx+1);
        reverse(revPref.begin(), revPref.end());
        // cout << revPref << endl;
        revPref += word.substr(idx+1, word.size() - idx); 
        return revPref;
    }
};