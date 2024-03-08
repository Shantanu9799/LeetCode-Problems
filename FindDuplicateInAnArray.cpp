int findDuplicate(vector<int> &arr) 
{
    // Write your code here
	int Xor = 0;
    for(auto it : arr) {
        Xor ^= it;
    }
    for(int i = 1; i < arr.size(); i++) {
        Xor ^= i;
    }

    return Xor;
}