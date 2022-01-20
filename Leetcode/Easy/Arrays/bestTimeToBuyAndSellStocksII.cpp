//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/564/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int maxProfit(vector<int> &prices)
{

    int profit = 0;
    for (int i = 1; i < prices.size(); i++)
    {

        if (prices[i - 1] < prices[i])
        {
            profit += prices[i] - prices[i - 1];
        }
    }
    return profit;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> prices;
    int price;
    for (int i = 0; i < n;i++) 
    {
        cin >> price;
        prices.push_back(price);
    }
    delete &price;

    cout << maxProfit(prices);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
