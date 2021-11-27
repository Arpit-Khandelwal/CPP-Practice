#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n,d;
    cin>>d>>n;

    int ans = 0;
    for (int i = 0;i<d;i++)
    {
        ans = n * (n + 1) / 2;
        n = ans;
    }
    cout << ans;
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
