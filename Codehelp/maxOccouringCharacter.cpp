#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

char getMaxOccuringChar(string str)
{
    unordered_map<char, int> count;
    char ans;

    for (char i : str)
        count[i]++;

    int maxi = 0;
    for (auto i : count)
    {
        if (i.second > maxi)
        {
            maxi = i.second;
            ans = i.first;
        }
        if (i.second == maxi)
            ans = min(i.first, ans);
    }
    return ans;
}

void solve()
{
    string s;
    cin >> s;

    cout << getMaxOccuringChar(s) << endl;
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
