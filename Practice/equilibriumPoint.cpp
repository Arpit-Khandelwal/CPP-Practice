#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int equilibriumPoint(long long a[], int n)
{

    // Your code here
/* my logic
    if (n == 1)
        return 1;

    int l = 0, h = n - 1;

    int sum1 = 0, sum2 = 0;
    while (l < h)
    {
        sum1 += a[l];
        sum2 += a[h];
        if (sum1 > sum2)
            h--;
        else if (sum1 < sum2)
            l++;
        else
            return (l+h)/2;
    }
    return l;
    */
   
   //GFG Logic - find sum of array then interatively subatract arr[i] from sum of array to find point of equilibrium
    int sum = 0;
    for (int i = 0; i < n;i++)
        sum += a[i];
    int leftSum = 0;
    for (int i = 0; i < n;i++)
    {
        sum -= a[i];
        if(sum==leftSum)
            return i;
        leftSum += a[i];
    }
    return -1;
}

void solve()
{
    int n;
    cin >> n;

    long long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << equilibriumPoint(arr, n);
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
