#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

string say(string s)
{
    int count = 0;
    string newStr = "";
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
            count++;
        newStr += to_string(count) + s[i];
    }
    return newStr;
}

string countAndSay(int n)
{
    if (n == 1)
        return "1";
    else
        return say(countAndSay(n - 1));
}

void solve()
{
    int n;
    cin >> n;
    cout << countAndSay(n) << endl;
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
