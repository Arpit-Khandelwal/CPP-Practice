#include <iostream>
#include <math.h>
using namespace std;
void solve();
int main()
{
    int t;
    while (t-->0){
        solve();
    }
}
void solve()
{
    long long int p, a, b, c, ans;
    long long int A, B, C;
    cin >> p >> A >> B >> C;
    for (int i = 1;;i++)
    {
        if(a>=p || b>=p || c>=p )
        {
        if(a>=p)
            ans = a - p;
        if(b>=p)
            ans = min(ans, (b - p));
        if(c>=p) ans=min(ans, (c-p));
        break;
        }
        else {
            a = A * i;
            b= B * i;
            c= C * i;
        }
    }
    cout << ans;
}