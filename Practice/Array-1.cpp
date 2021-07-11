#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int k;
    cin >> k;
    //logic
    int start=0,end=n-1;
    for(;start<end;)
    {
        int sum=arr[start]+arr[end];
        if(sum<k) start++;
        else if(sum>k) end--;
        else {
            cout << k << " is present as sum of 2 elements of array";
            exit(0);
        }
    }
    cout << k << " not present as sum of 2 nos of array";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
