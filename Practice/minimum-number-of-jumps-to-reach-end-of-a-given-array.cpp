#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int arr[] = {1,4,3,2,6,7};
    int n = sizeof(arr) / sizeof(int);

    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];

    int maxPos = 0, count = 0;
    for (int i = 0; arr[i]+i < n-1;)
    {
        int max = 0;
        for (int j = i; j <= i+arr[i]; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
                maxPos = j;
            }
        }
        i = maxPos;
        count++;
    }
    cout << ++count;
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
