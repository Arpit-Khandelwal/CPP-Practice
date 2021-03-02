#include<iostream>
using namespace std;
int main()
{
    string s,t;
    cin >> s >> t;
    string r = "";
    for (int i = s.length() - 1; i >= 0;i--)
        r += s[i];
    cout<<((r==t)?"YES":"NO");
}