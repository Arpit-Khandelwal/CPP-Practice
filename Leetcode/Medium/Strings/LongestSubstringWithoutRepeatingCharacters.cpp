#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int lengthOfLongestSubstring(string s)
{

    //method 3 - make dictionary of chars and their last index

    vector<int> dict(256,-1);
    int maxi = 0, start = -1;

    for (int i = 0;i<s.length();i++)
    {
        if(dict[s[i]]>start)
            start = dict[s[i]];
        
        dict[s[i]] = i;

        maxi = max(maxi, i - start);
    }

    return maxi;

    //sliding window
    int n = s.length();

    if (n <= 1)
        return n;

    int l = 0, r = 0, maxLen = 0;
    vector<int> chars(256, 0);
    while (r < n)
    {
        chars[s[r]]++;

        while (chars[s[r]] > 1)
        {
            chars[s[l]]--;
            l++;
        }

        maxLen = max(maxLen, r - l + 1);
        r++;
    }
    return maxLen;
    /*
        // method 2 - github copilot
        unordered_map<char, int> m;
        int max_len = 0, start = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (m.find(s[i]) != m.end())
            {
                max_len = max(max_len, i - start);
                start = max(start, m[s[i]] + 1);
            }
            m[s[i]] = i;
        }
        max_len = max(max_len, (int)s.size() - start);
        return max_len;
    */

    /* //method 1 - my solution
    int l = 0, h = 0, maxi = 0;

    int n = s.length();

    unordered_set<char> set;
    //Runtime: 1445 ms, faster than 5.00% Memory Usage: 149.2 MB, less than 7.14%     
    while (l <= h && h < n)
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
    */
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
