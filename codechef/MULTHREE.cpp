#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll int k;
    int d0, d1;

    cin >> k >> d0 >> d1;

    ll int sum = d0 + d1;
    k -= 2;
    ll int nextD;

    while(k--)
    {
        nextD = sum%10;
        sum += nextD;
    }

    cout << sum << " " << ((sum % 3 == 0) ? "YES" : "NO")<<endl;
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
