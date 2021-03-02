#include<iostream>
using namespace std;
int main()
{
    string s;
    int l=0, u=0, ch;
    cin >> s;
    for (int i = 0; i < s.length();i++)
    {
        ch = s[i];
        if(ch>=97 && ch<=122)
            l++;
        else
            u++;
    }
    if(l>=u)
        for (int i = 0; i < s.length();i++)
            putchar(tolower(s[i]));
    else 
        for (int i = 0; i <s.length();i++)  
            putchar(toupper(s[i]));
}