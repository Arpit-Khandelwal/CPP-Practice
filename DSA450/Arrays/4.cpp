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

    // int ans[n];
    // int l = 0, h = n - 1;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 0)
    //         ans[l++] = 0;
    //     if (arr[i] == 2)
    //         ans[h--] = 2;
    // }
    // while (l <= h)
    //     ans[l++] = 1;

    // for (int i = 0; i < n; i++)
    //     cout << ans[i] << " ";

    int p0 = 0, p1 = 0, p2 = 0;
    for (int i = 0; i < n;i++) 
    {
        if(arr[i]==0)
            p0++;
        else if(arr[i]==1)
            p1++;
        else if(arr[i]==2)
            p2++;
    }
    int i = 0;
    for (; i < p0;i++)
        arr[i] = 0;
    for (; i < p0+p1;i++)
        arr[i] = 1;
    for (; i < p0+p1+p2;i++)
        arr[i] = 2;
    
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
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
