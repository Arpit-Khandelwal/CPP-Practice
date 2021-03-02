#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t-->0){
        solve();
    }
}
void solve()
{
    int n, u, v;
    cin >> n >> u >> v;
    bool found = false;
    vector<int> a(n);
    for (int i = 0; i < n;i++) cin >> a[i];
    for (int i = 0; i < n-1;i++)
    {
        if(abs(a[i]-a[i+1])>1) {
            found = true;   //no shifting required
            break;
        }
    }
    if(found){
        cout << "0\n";
        return;
    }
    for (int i = 0; i < n-1; i++)
    {
        if(abs(a[i]-a[i+1])==1)
        {
            found = true; //1 row/column shifting required
            break;
        }
    }
    if(found){
        cout << min(u, v) << "\n";
        return;
    }
    cout << v + min(u, v) << "\n";
    return;
}