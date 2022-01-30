//https://www.spoj.com/problems/EKO/

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define mod 1000000007

ull int findSum(vector<ull int> heights, ull int m, ull int mid)
{
    ull int sum = 0;
    for (ull int i = 0; i < heights.size(); i++)
    {
        if (heights[i] <= mid)
            continue;
        sum += heights[i] - mid;
    }
    return sum;
}

ull int binarySearch(vector<ull int> heights, ull int m)
{
    sort(heights.begin(), heights.end());
    ull int l = 0, h = -1, mid;
    ull int ans = -1;
    for (ull int i = 0; i < heights.size(); i++)
        h = max(h, heights[i]);

    mid = l + (h - l) / 2;

    while (l <= h)
    {
        ull int sum = findSum(heights, m, mid);
        if (sum < m)
        {
            h = mid - 1;
        }
        else if (sum >= m)
        {
            ans = mid;
            l = mid + 1;
        }
       
        mid = l + (h - l) / 2;
    }
    return ans;
}

void solve()
{
    ull int n, m;
    cin >> n >> m;
    vector<ull int> heights;

    ull int x;
    for (ull int i = 0; i < n; i++)
    {
        cin >> x;
        heights.push_back(x);
    }

    cout << binarySearch(heights,m) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ull test = 1;
    // cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
