#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int myAtoi(string s)
{
    int l = s.length();
    long ans = 0;
    bool isNegative = false;
    int i = 0;

    while (s[i] == ' ' && i < l)
    {
        i++;
    }

    for (; i < l; i++)
    {

        if (s[i] == '+' || s[i] == ' ' || s[i] == '-')
        {
            if (s[i] == '-')
                isNegative = true;
            continue;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            if (ans > INT_MAX)
            {
                return (isNegative) ? INT_MIN : INT_MAX;
            }
            ans = ans * 10 + (s[i] - '0');
        }
        else
            break;
    }

    return ans * ((isNegative) ? -1 : 1);
}

void solve()
{
    char s[201];

    cin.getline(s, 201);

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
