#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    unordered_set<char> set;
    long int len = 0;
    for(int i = 0; i < s.length();i++)
    {
        if(set.find(s[i])==set.end())
        {
            set.insert(s[i]);
            len++;
        }
    }
    if(len%2==0)
        cout << "CHAT WITH HER!";
        else
            cout << "IGNORE HIM!";
}