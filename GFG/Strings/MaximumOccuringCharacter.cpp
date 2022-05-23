#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

static bool cmp(pair<char, int> a, pair<char, int> b)
{
    return a.second <= b.second;
}

void solve()
{
    string s;
    cin >> s;

    unordered_map<char, int> count;

    for (char i : s)
        count[i]++;

    int max_count = 0;
    char max_char = ' ';

    for (auto i : count)
    {
        if (i.second > max_count)
        {
            max_count = i.second;
            max_char = i.first;
        }

        else if (i.second == max_count)
        {
            max_char = min(max_char, i.first);
        }
    }

    cout<<max_char<<endl;
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
