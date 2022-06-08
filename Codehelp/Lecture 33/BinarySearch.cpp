#include<bits/stdc++.h>
using namespace std;

int recursiveBinarySearch(int l, int h, int *arr, int n)
{
    if (l > h)
        return -1;
    int mid = l + (h - l) / 2;
    if (arr[mid] == mid)
        return mid;
    else if (arr[mid] > mid)
        return recursiveBinarySearch(l, mid - 1, arr, n);
    else
        return recursiveBinarySearch(mid + 1, h, arr, n);
}

int binarySearch(int *input, int n, int val)
{

    //Write your code here
    return recursiveBinarySearch(0, n - 1, input, n);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int val;
    cin>>val;
    cout<<binarySearch(arr,n,val);
    return 0;
}