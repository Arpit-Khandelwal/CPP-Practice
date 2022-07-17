//https://leetcode.com/problems/interleaving-string/

bool isInterleave(string s1, string s2, string s3) {
    
    int p1=0,p2=0;
    
    while(p1<s1.length() && p2<s2.length())
    {
        if(s3[p1+p2]==s1[p1]) p1++;
        else if(s3[p1+p2]==s2[p2]) p2++;
        else return false;
    }
    
    while(p1<s1.length())
    {
        if(s3[p1+p2]==s1[p1]) p1++;
        else return false;
    }
    
    while(p2<s2.length())
    {
        if(s3[p1+p2]==s2[p2]) p2++;
        else return false;
    }
    
    if(p1==s1.length() && p2==s2.length()) return true;
    else return false;
    
}