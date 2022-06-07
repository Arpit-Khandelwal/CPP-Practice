#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *input, int n, int val)
{
    
    //Write your code here
    int l=0,h=n-1;
    int mid = l+h/2;
    
    int num = *(input+mid);
    if(num==val) return mid;
    else if(num<val) return binarySearch(input+mid,n,val);
    else return binarySearch(input,mid-1,val);
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