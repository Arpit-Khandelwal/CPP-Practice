#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int maxLength(int n, string s)
{
    int zeroes=0;
    int ones=0;
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0') zeroes++;
        else ones++;
    }

    if(ones==0 || zeroes==0)
        return 1;
    
    int ans= 2*min(zeroes,ones);
    if(abs(zeroes-ones))
    {
        ans++;
    }

    return ans;
}

void solve()
{
    int n;
    string s;
    
    cin>>n>>s;
    
    cout <<maxLength(n,s)<< endl;
}

int main() 
{

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
