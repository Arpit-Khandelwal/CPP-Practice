#include<bits/stdc++.h>
using namespace std;

int sumArray(int *arr, int n)
{
    if(n==0) return 0;
    return arr[0] + sumArray(arr+1, n - 1);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    cout<<"Sum of array elements: "<<sumArray(arr,n)<<endl;
}