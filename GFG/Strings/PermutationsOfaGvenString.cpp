#include<bits/stdc++.h>
using namespace std;

void solve(string s, vector<string> &ans, int i)
{
    if (i >= s.size())
    {
        ans.push_back(s);
        return;
    }
    string tempS = s;

    for (int j = i; j < s.length(); j++)
    {
        swap(tempS[i], tempS[j]);
        solve(tempS, ans, i + 1);
        tempS = s;
    }
}
vector<string> find_permutation(string S)
{
    // Code here there
    vector<string> ans;

    solve(S, ans, 0);

    set<string> s;
    for (string i : ans)
        s.insert(i);

    ans.clear();

    for (string c : s)
        ans.push_back(c);

    sort(ans.begin(), ans.end());
    return ans;
}

