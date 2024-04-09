int strstr(string s, string x)
{
     //Your code here
     int sl = s.size(), xl = x.size();
     string curr = "";
     for(int i = 0; i <= sl - xl; i++) {
         string curr = s.substr(i, xl);
         if(curr == x) return i;
     }
     
     return -1;
}

