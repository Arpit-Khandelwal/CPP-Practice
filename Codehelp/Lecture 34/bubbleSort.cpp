#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void bubbleSort(int *arr, int n)
{
    if(n==0 || n==1)
        return;

    for (int i = 0; i < n - 1;i++)
    {
        if(arr[i]>arr[i+1])
            swap(arr[i], arr[i + 1]);
    }

    bubbleSort(arr, n - 1);
}

void solve()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];

    bubbleSort(arr, n);

    for(int i:arr)
        cout << i << " ";

    cout << endl;
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
