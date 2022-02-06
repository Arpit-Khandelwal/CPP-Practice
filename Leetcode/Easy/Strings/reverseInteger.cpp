#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int reverse(int x)
{

    if (x < pow(2, -31) || x >= pow(2, 31))
        return 0;

    string s = "";
    bool isNeg = false;
    if (x < 0)
    {
        isNeg = true;
        x *= -1;
    }

    while (x > 0)
    {
        s += (x % 10) + 48;     //s reversed
        x /= 10;
    }

    int l = s.length();
    int rnum = 0;
    for (int i = 0; i <l;i++)
    {
        rnum = rnum * 10 + (s[i] - 48);
    }
    return rnum*((isNeg)?-1:1);
}

void solve()
{
    int x;
    cin >> x;

    cout << reverse(x) << endl;
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
