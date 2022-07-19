#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


void selectionSort(int*arr, int i, int n)
{
    if(i==n-1)
        return;

    int smallest = INT_MAX, pos = -1;
    for (int j = i; j < n; j++)
    {
        if(arr[j]<smallest)
        {
            smallest = arr[j];
            pos = j;
        }
    }
    if(smallest!=INT_MAX)
        swap(arr[i], arr[pos]);

    return selectionSort(arr, i+1, n);
}

void solve()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];

    selectionSort(arr, 0, n);

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
