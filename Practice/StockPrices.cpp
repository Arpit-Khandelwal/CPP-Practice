#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int maxProfit(vector<int>& prices) 
{
    /* this approach left out certain testcases, eg [3 2 6 5 0 3] ans=4, op=3
    int low,high;
    low=0;
    high=prices.size() -1;
    cout << high << "\t";
    int min,max;
    min=prices[low];max=prices[high];
    while(low<=high)
    {
        if(prices[low]<min) min=prices[low--];
        if(prices[high]>max) max=prices[high++];
        low++;
        high--;
    }
    return((max-min > 0)?(max-min):0);*/
    int n = prices.size();
    int leftMin;
    int profit = 0;
    for (int i = 0; i < n;i++)
    {
        leftMin = min(leftMin, prices[i]);              //i/p=[3 2 6 5 0 3], leftMin=[3 2 2 2 0 0]
        profit = max(profit, prices[i] - leftMin);           //profit=[0 0 4 3 0 3], max=4
    }
    return profit;
}

void solve()
{
    int n;
    cin>>n;
    vector<int> p;
    int j;
    for (int i = 0;i<n;i++)
    {
        cin >> j;
        p.push_back(j);
    }
    cout<<maxProfit(p);
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
