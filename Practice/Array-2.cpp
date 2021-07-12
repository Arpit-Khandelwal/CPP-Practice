#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int prod = 1; //find product of all elements and return prod/arr[i]  
    for (int i = 0;i<n;i++)
    {
        cin >> arr[i];
        prod *= arr[i];
    }
    for (int i = 0;i<n;i++)
        cout << (prod/arr[i])<<" ";
    //now how to solve without division
    //[1,2,3] -> [6,3,2]; [5,10,15] -> [150,75,50]
    /*simple bruteforce:
    int ans[n];
    for (int i = 0;i<n;i++)
        ans[i] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            ans[i] *= arr[j];
        }
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    */

    //solving without division- double pointer method
    //take a left pointer and right pointer, and for each arr[i], ans[i]=product of left[0,i-1] and right[i+1,n-1];
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
