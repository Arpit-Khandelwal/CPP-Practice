#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void mergeArray(int arr1[],int n, int arr2[],int m)
{
    for (int i = 0; i < n;i++)
    {
        if(arr1[i]>arr2[0])
        {
            swap(arr1[i], arr2[0]);

            int k = 1, temp = arr2[0];
            while(arr2[k]<temp && k<m)
                arr2[k - 1] = arr2[k++];
            arr2[k - 1] = temp;
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];

    for (int i = 0; i < n;i++)
        cin >> arr1[i];
    for (int j = 0; j < m;j++)
        cin >> arr2[j];

    mergeArray(arr1, n, arr2, m);
    for (int i = 0; i < n;i++)
        cout<< arr1[i]<<" ";
    for (int j = 0; j < m;j++)
        cout<< arr2[j]<<" ";

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
