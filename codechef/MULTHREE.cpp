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

    if(k==2) ;
    else if(k==3) sum *= 2;

    else
    {
        int cycles = (k-3) / 4;
        int remainder = (k-3) % 4;

        sum += cycles * (2 + 4 + 6 + 8);
        int sum1 = d0 + d1;
        while(k-->0)
        {            
            sum1 *= 2;
            sum += sum1 % 10;
        }
    }
    return ((sum % 3 == 0) ? "YES" : "NO");
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
