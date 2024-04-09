int remAnagram(string str1, string str2)
{
    // Your code goes here
    unordered_map<char, int> mpp;
    int i = str1.size() - 1, j = str2.size() - 1;
    while(i >= 0 || j >= 0) {
        if(i >= 0) {
            mpp[str1[i]]++;
            i--;
        }
        if(j >= 0) {
            mpp[str2[j]]--;
            j--;
        }
    }
    
    int removeableChar = 0;
    for(auto it : mpp) {
        if(it.second != 0) removeableChar += abs(it.second);
    }
    
    return removeableChar;
    
}