// https://leetcode.com/problems/top-k-frequent-elements/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

static bool mycomp(pair<int, int> a, pair<int, int> b)
{
    return (a.second > b.second) ? true : false;
}

vector<int> topKFrequent(vector<int> &nums, int k)
{
    unordered_map<int, int> count;

    for (int i : nums)
        count[i]++;

    vector<pair<int, int>> sorted;

    for (auto i : count)
    {
        sorted.push_back(i);
    }

    sort(sorted.begin(), sorted.end(), mycomp);

    vector<int> ans;
    int i = 0, n = count.size();
    for (auto it : sorted)
    {
        if (i < n)
        {
            ans.push_back(it.first);
            i++;
        }
        else
            break;
    }

    return ans;
}

void solve()
{
    int n;
    vector<int> ans;
    cin >> n;
    int x;
    while (n--)
    {
        cin >> x;
        ans.push_back(x);
    }

    int k;
    cin >> k;

    ans = topKFrequent(ans, k);
    for (int i : ans)
        cout << i << " ";

    cout << "\n";
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
