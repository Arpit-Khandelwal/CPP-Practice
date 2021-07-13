#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool notTriangle(int a,int b, int c)
{
    if((a+b < c) ||(b+c<a)||(a+c<b))
        return true;
    return false;
}
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(notTriangle(a,b,c)){
        cout << "-1";
        exit(0);
    }
    int sum = a + b + c;
    if(sum == 3*a)
        cout << "1";
    else if(sum-b == 2*a || sum-c == 2*b || sum-a == 2*c)
        cout << "2";
    else
        cout << 3;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
