#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int knapSack(int W, int wt[], int val[], int n)
{
    if(n==0||W==0)
        return 0;
    
    if(wt[n-1]<=W)
    {
        return max(knapSack(W - wt[n - 1], wt, val, n - 1) + val[n - 1], knapSack(W, wt, val, n - 1));
    }
    else
        return knapSack(W, wt, val, n - 1);
}

void solve()
{
    
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
