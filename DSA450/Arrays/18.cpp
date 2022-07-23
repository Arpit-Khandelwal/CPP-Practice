#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int nC2(int n)
{

    return (n * (n - 1)) / 2;
}
int getPairsCount(int arr[], int n, int k)
{
    // code here
    map<int, int> m;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (m[k - arr[i]])
            count += m[k - arr[i]];
        m[arr[i]]++;
    }
    return count;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << getPairsCount(arr, n, k) << endl;
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
