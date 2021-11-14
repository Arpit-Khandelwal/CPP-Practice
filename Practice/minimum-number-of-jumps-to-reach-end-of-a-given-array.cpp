#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maxPos = 0, count = 0;
    for (int i = 0; arr[i]+i < n;)
    {
        int max = 0;
        for (int j = 0; j < arr[i]; j++)
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
    cout << count;
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
