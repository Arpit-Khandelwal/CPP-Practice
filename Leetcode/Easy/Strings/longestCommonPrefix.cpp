#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

string longestCommonPrefix(vector<string> &strs)
{

    int n = strs.size();

    int pos = 0;
    for (; pos < strs[0].size(); ++pos)
    {
        char ch = strs[0][pos];
        for (int i = 1; i < n; i++)
        {

            if (ch != strs[i][pos])
                return strs[i - 1].substr(0, pos);
        }
    }
    return strs[0].substr(0, pos + 1);
}

void solve()
{
    int n;
    cin >> n;

    vector<string> s;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        s.push_back(str);
    }

    cout << longestCommonPrefix(s);
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
