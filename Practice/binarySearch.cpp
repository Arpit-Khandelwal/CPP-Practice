#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);

    int k;
    cin >> k;

    /*binary search logic
    */
    int l = 0, h = n - 1, mid;
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test = 1;
    cin >> test;
    while (test--)
    {
        cout << solve() << endl;
    }
    return 0;
}
