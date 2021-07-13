#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n,k;
    cin >> n >> k;
    ll int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];
    double count[32];
    int ans = 0;
    memset(count, 0, sizeof(count));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 32;j++)
        {
            if(arr[i]&(1<<j))
                count[j]++;
        }
    }
    for (int i = 0; i < 32; i++)
        ans+= ceil(count[i] / k);
    cout << ans<<"\n";
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
