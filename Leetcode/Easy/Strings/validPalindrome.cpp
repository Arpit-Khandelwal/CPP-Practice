// https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/883/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool isPalindrome(string s)
{
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
