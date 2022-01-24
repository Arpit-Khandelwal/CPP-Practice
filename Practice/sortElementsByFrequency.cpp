#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        unordered_map<int, int> a;
        for(int i=0;i<n;i++) a[arr[i]]++;
        //sort(a.begin(),a.end());
        vector<int> ans;
        for(int i=0;i<a.size();i++)
            ans.push_back(a[arr[i]]);
        return ans;
    }

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];
    vector<int> ans = sortByFreq(arr, n);
    for (int i = 0; i < ans.size();i++)
        cout << ans[i] << " ";
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
