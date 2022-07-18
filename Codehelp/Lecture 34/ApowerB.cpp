#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int power(int a, int b)
{
    if(b==1)
        return a;
    return a * power(a, b - 1);
}

void solve()
{
    int a,b;
    cin >> a >> b;

    cout << power(a, b) << endl;
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
