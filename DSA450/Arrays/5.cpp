#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    // int n;
    // cin >> n;
    // int arr[n];

    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];

    int arr[] = {-12, 11, -13, -5,6, -7, 5, -3, -6};
     int n = sizeof(arr) /sizeof(arr[0]);

    int l = 0, h = n - 1;
    while(l<h)
    {
        if(arr[l]>0)
        {
            if(arr[h]<0)
            {
                arr[h] += arr[l];
                arr[l] = arr[h] - arr[l];
                arr[h] -= arr[l];
                h--;
                l++;
            }
            else
                h--;
        }
        else
            l++;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
