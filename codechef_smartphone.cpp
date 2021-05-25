#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,temp;
    cin >> n;
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
        cin >> arr[i];      //input array
//    for (long long int i = 0; i < n; i++)     //sort array in ascending order
//    {
//        for (long long int j = 0; j < n - i - 1; j++)     //using bubble sort
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
    int t = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+t);
    long long int max = -1;       //max=fixed_price
    for (long long int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * (n - i);    //computing revenue for ith price
        if (max < arr[i])
            max = arr[i];
    }
    cout << max;
    return 0;
}
