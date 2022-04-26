#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    // Write your code here.
    int num1 = 0, num2 = 0;
    for (int i = 0; i < n; i++)
        num1 = num1 * 10 + a[i];

    for (int i = 0; i < m; i++)
        num2 = num2 * 10 + b[i];

    string num = to_string(num1 + num2);
    vector<int> ans;

    for (int i = 0; i < num.length(); i++)
    {
        ans.push_back(num[i] - 48);
    }
    return ans;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];
    vector<int> ans = findArraySum(a, n, b, m);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}