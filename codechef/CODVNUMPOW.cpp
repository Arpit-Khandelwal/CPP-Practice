#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int pc, pr;
    cin >> pc >> pr;
    int c=pc/9, r =pr/9;

    if(c< r)
        cout<<0<<" "<<((pc%9==0)?c:c+1);
    else
        cout<< 1<<" "<<((pr%9==0)?r:r+1);
    cout<<"\n";
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
