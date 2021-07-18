#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int maxProfit(vector<int>& prices) 
{
    int l,r=0, n = prices.size();
    int profit = 0;
    for (l = 0; l < n-1;l++)
    {
        if(prices[l]<prices[l+1])
            profit += (prices[l + 1] - prices[l]);
    }
   return profit;
}

void solve()
{
    int n, j;
    cin>>n;
    vector<int> arr;
    for (int i = 0; i < n;i++)
    {
        cin >> j;
        arr.push_back(j);
    }
    cout<< maxProfit(arr);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
   // cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
