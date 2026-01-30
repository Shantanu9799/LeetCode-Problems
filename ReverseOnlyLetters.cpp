class Solution {
public:
    string reverseOnlyLetters(string s) {
        string tmp = s;
        int i = 0, j = tmp.size() - 1;
        while(i < j) {
            char ch1 = tolower(tmp[i]);
            char ch2 = tolower(tmp[j]);
            if((ch1 >= 'a' && ch1 <= 'z') && (ch2 >= 'a' && ch2 <= 'z')) {
                // cout << ch1 << " " << ch2 << endl;
                swap(tmp[i], tmp[j]);
                i++; j--;
            }
            else if(!(ch1 >= 'a' && ch1 <= 'z')) i++;
            else if(!(ch2 >= 'a' && ch2 <= 'z')) j--;
        }
        return tmp;
    }
};
