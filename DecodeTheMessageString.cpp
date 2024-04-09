class Solution {
public:
    string decodeMessage(string key, string message) {
        // storing the index of the first occurance of every character
        vector<int> index(26, -1);
        int id = 0;
        for(int i = 0; i < key.size(); i++) {
            if(!isspace(key[i]) && index[key[i] - 'a']==-1) {
                index[key[i] - 'a'] = id;
                id++;
            }
        }
        // for(int i = 0; i < 26; i++) {
        //     cout << index[i] << " ";
        // }

        // create the real decoded message
        string decoded = "";
        for(int i = 0; i < message.size(); i++) {
            if(isspace(message[i])) decoded += ' ';
            else decoded += (char) ('a' + index[message[i] - 'a']);
        }
        return decoded;
    }
};

17