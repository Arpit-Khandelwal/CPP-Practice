//https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i < n;i++) cin>>arr[i];
    int max = INT_MIN, min=INT_MAX;
    for(int i=0; i < n; i++)
    {
        if(arr[i]>max)
            max = arr[i];
        if(arr[i]<min) min = arr[i];
    }
    cout << max << " " << min;
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
