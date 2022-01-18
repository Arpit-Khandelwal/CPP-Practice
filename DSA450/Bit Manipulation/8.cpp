//https://www.geeksforgeeks.org/divide-two-integers-without-using-multiplication-division-mod-operator/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int a,b;
    cin >> a >> b;

    int count = 0;
    while(a>=b)
    {
        a -= b;
        count++;
    }

    cout << count << endl;
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
