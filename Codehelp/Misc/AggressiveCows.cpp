#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


bool isPossible(vector<int> &stalls, int k, int mid)
{
    int cows = 1;
    int lastStall = stalls[0];
    int n = stalls.size();
    for (int i = 0; i < n; i++)
    {
        if (stalls[i] + lastStall <= mid)
        {
            cows++;
            if (cows == k)
                return true;
            lastStall = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end());
    int l = 0;
    int h = stalls[stalls.size() - 1];
    int ans = -1;
    int mid = l + (h - l) / 2;
    while (l <= h)
    {
        if (isPossible(stalls, k, mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
        mid = l + (h - l) / 2;
    }
    return ans;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> stalls;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        stalls.push_back(x);
    }

    cout << aggressiveCows(stalls, k);
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