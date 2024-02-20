class Solution{
public:	
	
	bool palindromeHelper(string s, int i, int j) {
	    if(i >= j) return true;
	    return s[i] == s[j] ? palindromeHelper(s, i+1, j-1) : false;
	}
	
	int isPalindrome(string s)
	{
	    // Your code goes here
	    return palindromeHelper(s, 0, s.size()-1);
	}

};