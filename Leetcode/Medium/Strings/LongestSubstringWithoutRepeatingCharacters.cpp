#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int lengthOfLongestSubstring(string s)
{

    int l = 0, h = 0, maxi = -1;

    int n = s.length();

    unordered_set<char> set;
    //Runtime: 1445 ms, faster than 5.00% Memory Usage: 149.2 MB, less than 7.14%     
    while (l <= h && h < n - 1)
    {
        if (set.find(s[h]) != set.end())
        {
            set.clear();
            l++;
            h = l;
        }
        else
        {
            set.insert(s[h]);
            h++;
        }
        maxi = max(maxi, h - l);
    }
    return maxi;
}
void solve()
{
    string s;
    cin >> s;
    cout << lengthOfLongestSubstring(s) << endl;
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
