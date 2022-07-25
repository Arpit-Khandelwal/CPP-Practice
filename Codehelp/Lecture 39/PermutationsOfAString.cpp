#include<bits/stdc++.h>
using namespace std;

void solve(string s, vector<string> &ans, int i)
{
    if(i>=s.size())
    {
        ans.push_back(s);
        return;
    }
    string tempS = s;

    for (int j = i; j < s.length();j++)
    {
        swap(tempS[i], tempS[j]);
        solve(tempS, ans, i + 1);
        tempS = s;
    }
        
}

int main()
{
    string s;
    cin >> s;

    vector<string> ans;
    solve(s,ans,0);

    for(string i:ans) cout<<i<<" ";
}