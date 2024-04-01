class Solution {
public:
    int countSeniors(vector<string>& details) {
        int senior = 0;
        for(string s : details) {
            int age = stoi(s.substr(11, 2));
            senior += (age > 60);
        }
        return senior;
    }
};