#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool checkPalindrome(string s, int i)
{
    int n = s.length();
    if(i==n-1)
        return true;
    
    if(s[i]==s[n-i-1])
        return checkPalindrome(s, i + 1);
    else
        return false;
}

void solve()
{
    string s;
    cin >> s;

    cout<<checkPalindrome(s,0)<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
