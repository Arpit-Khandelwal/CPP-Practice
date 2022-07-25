#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin>>arr[i];

    vector<int> ans;
    int count = 0;
    int i, j;
    i = j = 0;
    while(i<n && j<n)
    {
        if(arr[i]<0 && count%2) ans.push_back(arr[i]);
        if(arr[j]>0 && count%2==0) ans.push_back(arr[j]);

        count++;
        i++;
        j++;
    }

    for(int i:ans) cout<<i<<" ";
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