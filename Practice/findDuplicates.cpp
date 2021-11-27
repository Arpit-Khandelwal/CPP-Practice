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
    int i = 0;
    while(arr[i]!=arr[arr[i]])
    {
        swap(arr[i], arr[arr[i]]);          //1 3 2 4 0 
    }

    cout << arr[i];
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
