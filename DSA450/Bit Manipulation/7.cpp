#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void copySetBits(unsigned &x, unsigned y, unsigned l, unsigned r)
{
    if(l<1 || r>32)
        return;

    for (int i = l; i <= r;i++)
    {
        int mask = 1 << (i-1);

        if(y&mask)
            x = x | mask;
    }
    return;
}

void solve()
{
    unsigned int x, y, l, r;
    cin >> x >> y >> l >> r;
    copySetBits(x, y, l, r);
    cout << x << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
