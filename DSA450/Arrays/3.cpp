#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void findSmallest(int *arr,int l, int h, int n)
{
    int min = INT_MAX;
    int pos = -1;
    for (int i=l; i <= h;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
            pos = i;
        }
    }
    int temp;
    temp=arr[l];
    arr[l] = arr[pos];
    arr[pos] = temp;
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int k;
    for (int i = 0; i < n;i++)
        cin >> arr[i];
    cin >> k;

    for (int i = 0; i < k;i++)
        findSmallest(arr, i, n - 1, n);

    for (int i = 0; i < n;i++)
        cout << arr[i] << " ";
    cout << arr[k - 1];
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