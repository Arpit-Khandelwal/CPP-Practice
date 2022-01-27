#include <bits/stdc++.h>
#include <iostream>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    // Write your code here
    pair<int, int> p = {-1, -1};

    //for first pos
    int l = 0, h = n - 1, mid;
    while (l <= h)
    {
        mid = l + (h - l) / 2;
        if (k > arr[mid])
            l = mid + 1;
        else if (k < arr[mid])
            h = mid - 1;
        else
        {
            p.first = mid;
            h = mid - 1; //check in first half of subarray
        }
    }
    if (p.first == -1)
        return p;

//to find last pos
    l = 0, h = n - 1, mid;
    while (l <= h)
    {
        mid = l + (h - l) / 2;
        if (k > arr[mid])
            l = mid + 1;
        else if (k < arr[mid])
            h = mid - 1;
        else
        {
            p.second = mid;
            l = mid + 1; //check in latter half of array
        }
    }
    return p;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }

    pair<int, int> ans = firstAndLastPosition(arr, n, k);
    cout << ans.first << " " << ans.second << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}