#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


void printVector(vector<vector<int>> &ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }
}

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());

    printVector(intervals);

    int n = intervals.size();
    vector<vector<int>> ans;

    for (auto interval : intervals)
    {
        if(ans.empty() || ans.back()[1]<interval[0])
        {
            ans.push_back(interval);
        }
        else
        {
            ans.back()[1] = max(ans.back()[1], interval[1]);
        }
    }

        return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> intervals;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        intervals.push_back({x, y});
    }

    vector<vector<int>> ans = merge(intervals);

    printVector(ans);
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
