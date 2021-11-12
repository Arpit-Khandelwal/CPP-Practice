#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int solve()
{
    string S;
    cin >> S;
    int n = S.length();
    for(int i=0;i<n/2;i++)
    {
        if(S[i]==S[n-i-1]) continue;
        else return 0;
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    cin>>test;
    while(test--)
    {
        cout<<solve()<<"\n";
    }
    return 0;
}
