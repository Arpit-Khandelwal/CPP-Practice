//https://www.geeksforgeeks.org/divide-two-integers-without-using-multiplication-division-mod-operator/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int solve(ll int a, ll int b)
{

    ll int count = 0;
    /*
    while(a>=b)
    {
        a -= b;
        count++;
    }
    */
    int sign = (b < 0) ^ (a < 0) ? -1 : 1;
    a = abs(a);
    b = abs(b);
    int q = 0;
    for (int i = 31; i >= 0; i--)
    {
        if (count + (b << i) <= a)
        {
            count += b << i;
            q |= 1LL << i;
        }
    }

    return q * sign;
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
        int a, b;
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }
    return 0;
}
