#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int strStr(string haystack, string needle)
{
    int hl = haystack.length();
    int nl = needle.length();
    int i;

    for (i = 0; i <= hl - nl; i++)
    {
        int j = 0;
        for (; j < nl; j++)

        {
            if (haystack[i + j] != needle[j])
                break;
        }
        if (j == nl)
            return i;
    }
    return -1;
}

void solve()
{
    string h, n;

    cin >> h >> n;

    cout << strStr(h, n) << endl;
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
