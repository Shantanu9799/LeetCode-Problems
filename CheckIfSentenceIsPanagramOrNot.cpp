class Solution {
public:
    bool checkIfPangram(string sentence) {
        // if sentence doesn't contain atleast 26 character, no way haing all char once
        if(sentence.size() < 26) return false;
        // storing the present of each char  at most once
        vector<int> present(26, 0);
        for(int i = 0; i < sentence.size(); i++) {
            present[sentence[i] - 'a'] = 1;
        }
        // checking the presence
        for(int i = 0; i < 26; i++) {
            if(present[i] == 0) return false;
        }
        // else, we are sure that every char is present atleast once
        return true;
    }
};