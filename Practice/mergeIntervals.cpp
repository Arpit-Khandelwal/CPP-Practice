#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

vector<vector<int>> merge(vector<vector<int>>& intervals) 
{
    vector<vector<int>> ans;
    for (int i = 0; i < intervals.size()-1;i++)
    {
        
    }
}

void solve()
{
    int n;
    cin>>n;
    int a, b;
    vector<vector<int>> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> a>>b;
        arr.push_back({a,b});
    }
    vector<vector<int>> ans = merge(arr);

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
 //   cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
