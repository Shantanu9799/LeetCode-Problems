class Solution {
    public boolean isPalindrome(String s) {
        s = s.toLowerCase();
        String oneString = "";
        for(int i=0; i<s.length(); i++) {
            if((s.charAt(i)>=97 && s.charAt(i)<=122) || (s.charAt(i)>=48 && s.charAt(i)<=57)) {
                oneString += s.charAt(i);
            }
        }
        /*
        s = "";
        for(int i=oneString.length()-1; i>=0; i--) {
            s += oneString.charAt(i);
        }
        return s.equals(oneString);
        */
        int i = 0;
        int j = oneString.length()-1;
        while(i<j) {
            if(oneString.charAt(i) != oneString.charAt(j)) {
                return false;
            }
            i++; j--;
        }
        return true;
    }
}
