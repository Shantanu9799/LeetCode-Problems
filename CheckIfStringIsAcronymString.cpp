class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string acronym = "";
        for(string s : words) {
            acronym += s[0];
        }
        return s == acronym;
    }
};