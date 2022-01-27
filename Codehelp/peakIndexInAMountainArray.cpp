//https://leetcode.com/problems/peak-index-in-a-mountain-array/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int peakIndexInMountainArray(vector<int> &arr)
{
    int l = 0, h = arr.size() - 1, mid;
    while (l < h)
    {
        mid = l + (h - l) / 2;
        if (arr[mid] < arr[mid + 1])
            l = mid + 1;
        else
            h = mid;
    }
    return l;
}

void solve()
{
    int n;
    cin >> n;

    int x;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    cout << peakIndexInMountainArray(arr) << endl;
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
