class Solution {
public:
    bool isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> prefixCount(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefixCount[i + 1] = prefixCount[i] + (isVowel(words[i][0]) && isVowel(words[i].back()) ? 1 : 0);
        }

        vector<int> countVowel;
        for (const auto& query : queries) {
            int l = query[0];
            int r = query[1];
            int count = prefixCount[r + 1] - prefixCount[l];
            countVowel.push_back(count);
        }

        return countVowel;
    }
};