#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

vector<int> solve()
{
    int n;
    cin >> n;

    if(n==1) return {1};
    vector<int> ans(n,0);
    for (int i = 0; i < n;i++)
    {
        ans[i] = i+2;
    }
    ans[n - 1] = 1;

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    cin>>test;
    vector<int> ans;
    while(test--)
    {
        ans = solve();
        for(int i:ans) cout<<i<<" ";
        cout << endl;
    }
    return 0;
}
