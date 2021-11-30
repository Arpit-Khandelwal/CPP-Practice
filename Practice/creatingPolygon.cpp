#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];
    
    while(true)
    {
        sort(arr, arr + n, greater<int>());
        int sum=accumulate(arr , arr+n , sum);

        if(sizeof(arr)/sizeof(int) >2 && arr[0]<sum -arr[0] ) {
            cout << sum << "\n";
            break;
        }
        else{
            arr[0] = 0;
        }
    }
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
