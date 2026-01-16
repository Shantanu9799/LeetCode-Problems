class Solution {
public:
    string toGoatLatin(string sentence) {
        vector<string> s;
        string word;
        stringstream ss(sentence);
        while(getline(ss, word, ' ')) {
            s.push_back(word);
        }
        string finalString = "";
        for(int i = 0; i < s.size(); ++i) {
            string str = s[i];
            char ch = tolower(str[0]);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
                str += "ma";
            } else {
                str = str.substr(1, str.size()-1) + str[0] + "ma";
            }
            for(int j = 0; j <= i; ++j) {
                str += 'a';
            } 
            if(i == s.size()-1) finalString += str;
            else finalString = (finalString + str + ' ');
        }
        return finalString;
    }
};
