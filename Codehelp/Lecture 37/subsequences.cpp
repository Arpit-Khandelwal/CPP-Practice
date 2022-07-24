#include <bits/stdc++.h>
using namespace std;

void solve(string str, int i, string op, vector<string> &ans)
{
    if (i >= str.length())
    {
        if (op.length() == 0) // don't add null character to ans
            return;
        ans.push_back(op);
        return;
    }

    solve(str, i + 1, op, ans);

    op += str[i];
    solve(str, i + 1, op, ans);
}
vector<string> subsequences(string str)
{

    // Write your code here
    vector<string> ans;
    string op = "";
    solve(str, 0, op, ans);
    return ans;
}
