bool checkPalindrome(string s)
{
    int l=0,h=s.length()-1;
    while(l<=h)
    {
        if(s[l++]!=s[h--]) return false;
    }
    return true;
}

string findPalindrome(string s)
{
    if(checkPalindrome(s)) return s;
    
    string s1 = findPalindrome(s.substr(0,s.length()-1));
    string s2 = findPalindrome(s.substr(1,s.length()-1));
    
    if(s1.length()>s2.length()) return s1;
    else return s2;
    
}

string longestPalindrome(string s) {
    
    int l = s.length();
    if(l==1) return s;
    
    return findPalindrome(s);
    
    
}
