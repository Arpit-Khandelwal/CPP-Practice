#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int gcd = arr[0];
    for (int i = 0; i < n; i++) 
    {
        if(arr[i]%gcd!=0)
            gcd = __gcd(arr[i], gcd);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count += (arr[i] / gcd);
    }
    cout << count << "\n";
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
