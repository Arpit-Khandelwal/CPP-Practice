#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int myAtoi(string s)
{
    int l = s.length();
    int ans = 0;
    bool isNegative = false;
    int i = 0;

    while (s[i] == ' ')
    {
        i++;
    }

    for (; i < l; i++)
    {

        if (s[i] == '-')
        {
            isNegative = true;
        }

        else if (s[i] == '+')
            continue;

        else if (s[i] >= '0' && s[i] <= '9')
        {
            int x = (s[i] - '0');
            if (ans * 10 > INT_MAX)
            {
                if (isNegative)
                    return INT_MIN;
                else
                    return INT_MAX;
            }
            ans = ans * 10 + x;
        }

        else
            break;
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
