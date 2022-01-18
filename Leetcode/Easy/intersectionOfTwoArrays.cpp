//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/674/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

vector<int> intersect(vector<int> &a, vector<int> &b)
{
    unordered_map<int, int> freq;
    for (int i : a)
        freq[i]++;

    vector<int> ans;
    for (int i : b)
        if (freq[i]-- > 0)
            ans.push_back(i);

    return ans;
}
void solve()
{
    ;
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
