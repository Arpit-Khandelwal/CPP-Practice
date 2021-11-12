#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    set<int> s;
    for (int i = 0; i <n;i++)
        s.insert(arr1[i]);
    for (int j = 0; j < m;j++)
        s.insert(arr2[j]);

    for (auto it = s.begin(); it!=s.end();it++)
        cout << *it << " ";
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
