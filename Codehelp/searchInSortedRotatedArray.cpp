// Search In Rotated Sorted Array

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int binarySearch(vector<int> arr, int l, int h, int k)
{
    int mid;
    while (l <= h)
    {
        mid = (l + h) / 2; //works for almost all cases except when l+h > INT_MAX
        //therefore, we can compute mid as
        mid = l + ((h - l) / 2); //handles Overflow of INT_MAX
        if (k > arr[mid])
            l = mid + 1;

        else if (k < arr[mid])
            h = mid - 1;
        else
            return mid;
    }
    return -1;
}

int findPivotElement(vector<int> arr)
{
    int l = 0, h = arr.size() - 1, mid;
    while (l < h)
    {
        mid = l + (h - l) / 2;
        if (arr[mid] >= arr[0])
            l = mid + 1;
        else
            h = mid;
    }
    return l;
}

int findPosition(vector<int> &arr, int n, int k)
{
    int pivot = findPivotElement(arr);
    if(arr[pivot]<= k && k<= arr[n-1])
        return binarySearch(arr, pivot, n - 1, k);
    else
        return binarySearch(arr, 0, pivot - 1, k);
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

    cout << findPosition(arr, n, k) << endl;
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
