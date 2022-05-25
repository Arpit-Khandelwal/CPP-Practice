// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

string removeDuplicates(string s, int k)
{

    int l = s.length();

    vector<pair<char, int>> st;

    for (char i : s)
    {
        if (!st.empty() && st.back().first == i)
            st.back().second++;
        else
            st.push_back({i, 1});

        if (st.back().second == k)
            st.pop_back();
    }

    string ans;

    for (auto itr : st)
        ans.append(itr.second, itr.first);

    return ans;
}

void solve()
{
    string s;
    int k;
    cin>>s>>k;

    cout<<removeDuplicates(s, k)<<endl;
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
