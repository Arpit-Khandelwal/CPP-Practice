#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    
}

void solve()
{
    int n;
    vector<vector<int>> intervals;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        intervals.push_back({x, y});
    }

    vector<vector<int>> ans = merge(intervals);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }
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
