#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    int x, max_a = a[0], max_b = b[0];
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
        max_a = max(max_a, x);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        b.push_back(x);
        max_b = max(max_b, x);
    }

    if (max_a > max_b)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
                swap(a[i], b[i]);
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
                swap(a[i], b[i]);
        }
    }
    max_a = a[0], max_b = b[0];
    for (int i = 0; i < n; i++)
    {
        max_a = max(max_a, a[i]);
        max_b = max(max_b, a[i]);
    }
    cout << max_a * max_b << endl;
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
