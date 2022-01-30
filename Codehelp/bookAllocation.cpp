#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid)	
{
    int students = 1;
    int pages=0;
    for(int i=0;i<n;i++)
    {
        if(pages + arr[i] <= mid) {pages+=arr[i];}
        else 
        {
            students++;
            if(students > m || arr[i] > mid) {return false;}
            pages = arr[i];
        }
    }
    return true;
}
int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    int e = sum;
    int mid = s+(e-s)/2,ans;
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else s=mid+1;
        mid = s+(e-s)/2;
    }
    return ans;
}


int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> boards;
    int x;
    for (int i = 0; i < n;i++) 
    {
        cin >> x;
        boards.push_back(x);
    }

    cout << allocateBooks(boards, n, m) << endl;
}