#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

string solve()
{
    ll int k;
    int d0, d1;

    cin >> k >> d0 >> d1;

    ll int sum = d0 + d1;
    /* bruteforce
    ll int nextD;
    k -= 2;

    while(k--)
    {
        nextD = sum%10;
        sum += nextD;
    }
    */

    if(k==2)
        return ((sum % 3 == 0) ? "YES" : "NO");
    else if(k==3)
    {
        sum *= 2;
        return ((sum % 3 == 0) ? "YES" : "NO");
    }
    else
    {
       
    }
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
        cout << solve() << endl;
    }
    return 0;
}
