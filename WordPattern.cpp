class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // break the string and create a list
        vector<string> words;
        stringstream ss(s);
        string word;
        while(getline(ss, word, ' ')) {
            words.push_back(word);
        }
        // now we got the string as an array
        int len = words.size();
        // for(int i = 0; i < len; ++i) cout << words[i] << " ";
        // if the number of chars are != to the number of array elements return false
        if(len != pattern.size()) return false;
        // now create a map and a used set
        unordered_map<string, char> mpp;
        set<char> used;
        // loop through the array and match every character
        for(int i = 0; i < len; ++i) {
            string currWord = words[i];
            char ch = pattern[i];
            // cout << currWord << " " << ch << endl;
            // now check if both are not present
            if(mpp.find(currWord) == mpp.end() && used.find(ch) == used.end()) {
                mpp[currWord] = ch;
                used.insert(ch);
            }
            // if the string is already present and the value is not matched with the current char
            else if((mpp.find(currWord) != mpp.end() && mpp[currWord] != pattern[i]) || (mpp.find(currWord) == mpp.end() && used.find(ch) != used.end())) return false;
        }
        return true;
    }
};
