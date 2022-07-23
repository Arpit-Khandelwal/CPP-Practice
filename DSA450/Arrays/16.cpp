#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll merge(ll a[], ll s, ll mid, ll e)
{
    ll temp[e - s + 1];

    ll count = 0;

    ll p1 = s, p2 = mid, p3 = 0;
    while (p1 < mid and p2 <= e)
    {
        if (a[p1] > a[p2])
        {
            count += (mid - p1);
            temp[p3++] = a[p2++];
        }
        else
        {
            temp[p3++] = a[p1++];
        }
    }
    while (p1 < mid)
    {
        temp[p3++] = a[p1++];
    }
    while (p2 <= e)
    {
        temp[p3++] = a[p2++];
    }

    for (ll i = 0; i < e - s + 1; i++)
    {
        a[s + i] = temp[i];
    }
    return count;
}
ll mergesort(ll arr[], ll s, ll e)
{

    if (s >= e)
        return 0;
    ll mid = s + (e - s) / 2;

    ll count = 0;
    count += mergesort(arr, s, mid);
    count += mergesort(arr, mid + 1, e);

    count += merge(arr, s, mid + 1, e);
    return count;
}
long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    return mergesort(arr, 0, N - 1);
}

void solve()
{
    long long int n;
    cin >> n;
    long long int arr[n];

    for (long long int i = 0; i < n; i++)
        cin >> arr[i];

    cout << inversionCount(arr, n) << endl;
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
