#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int myAtoi(string s)
{
    int l = s.length();
    int ans = 0;
    bool isNegative = false;

    for (int i = 0; i < l; i++)
    {
        if (s[i] == ' ')
            continue;

        if (s[i] == '-')
        {
            isNegative = true;
            continue;
        }

        if (s[i] == '+')
            continue;
        try
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                ans = ans * 10 + (s[i] - '0');
                continue;
            }

            else
                break;
        }
        catch (exception e)
        {
            if (isNegative)
                return INT_MIN;
            else
                return INT_MAX;
        }
    }
    return ans * ((isNegative) ? -1 : 1);
}

void solve()
{
    string s;

    cin >> s;

    cout << myAtoi(s) << endl;
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
