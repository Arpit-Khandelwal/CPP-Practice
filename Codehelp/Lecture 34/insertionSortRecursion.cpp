#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void insertionSortRecursive(int* arr, int i, int n)
{
    if(i==n-1)
        return;

    int temp = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j]>temp)
        arr[j + 1] = arr[j--];
    for (int i = 0; i < n;i++)  cout << arr[i] << " ";
    arr[j + 1] = temp;

    return insertionSortRecursive(arr, i + 1, n);
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    insertionSortRecursive(arr, 1, n);

    for (int i : arr)
        cout << i << " ";

    cout << endl;
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
