#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    string str;
    cin>>str;
    
    //Code here
    for(int i=0;i<str.length();i++)
    {
        char ch = str[i];
        if(ch <'0' || ch>'1')
            {
                cout << 0;
                return;
            }
    }
    cout << 1;
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
