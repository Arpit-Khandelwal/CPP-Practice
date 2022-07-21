#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

string solve()
{
    int n;
    cin>>n;

    int x;
    while(n--)
    {
        cin >> x;
        if(x)
            return "HARD";
    }

    return "EASY";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    // cin>>test;
    while(test--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}
