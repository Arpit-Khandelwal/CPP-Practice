// https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/883/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool isPalindrome(string s)
{
    //convert all uppercase to lowercase
    //remove all non alphanumeric chars
    string newstr="";

    for (int i = 0; i < s.length();i++)
    {
        char ch = s[i];

        if(ch>=65 && ch<=90) 
        {
            newstr += (ch+22);
        }

        else if(ch >=97 && ch<=122)
            newstr += ch;
    }

    //newstr is lowercase and filtered from all non alphanumeric characters
    //check if newstr is palindrome
    int n = newstr.length();
    for (int i = 0; i < n/2;i++)
    {
        if(newstr[i]!=newstr[n-i-1])
            return false;
    }
    return true;
}

void solve()
{
    string s;
    cin >> s;

    cout << (isPalindrome(s) ? "yes" : "no");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
