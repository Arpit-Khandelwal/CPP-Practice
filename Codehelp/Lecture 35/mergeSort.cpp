#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int l1 = mid - s + 1;
    int l2 = e - mid;

    int arr1[l1], arr2[l2];

    //copy arr[s,mid] in arr1 and arr[mid+1,e] in arr2
    int k = s;
    for (int i = 0; i < l1;i++)
        arr1[i] = arr[k++];
    k = mid+1;
    for (int i = 0; i < l2;i++)
        arr2[i] = arr[k++];

    //merge two sorted arrays
    k = s;
    int i1 = 0, i2 = 0;
    while( i1 < l1 && i2 < l2)
    {
        if(arr1[i1]<arr2[i2])
            arr[k++] = arr1[i1++];
        else
            arr[k++] = arr2[i2++];
    }

    while(i1<l1) arr[k++]=arr1[i1++];
    while(i2<l2) arr[k++]=arr1[i2++];

    return;
}

void mergeSort(int *arr, int s, int e)
{
    if(s>=e)
        return;

    int mid = s + (e - s) / 2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];

    //mergeSort recursive
    mergeSort(arr, 0, n - 1);
    for(int i:arr)
        cout << i<<" ";
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
