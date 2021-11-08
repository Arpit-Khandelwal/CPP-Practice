//https://leetcode.com/problems/reverse-string/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    string s;
    cin >> s;
    int l = s.length();
    for (int i = 0; i < l/2;i++)
    {
        char ch;
        ch = s[i];
        s[i] = s[l - i - 1];
        s[l- i - 1] = ch;
    }
        cout << s;
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
