#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

long long int solve(vector<ll int> prefix, vector<ll int> suffix)
{
    int a, b;
    cin >> a >> b;

    ll int damage = 0;
    if (a < b)
    {
        // for (int i = a; i < b; i++) damage += prefix[i];
        return prefix[b-1] - prefix[a - 1];
    }
    else
    {
        // for (int i = a - 1; i >= b; i--) damage += suffix[i];
        return suffix[b+1] - suffix[a+1];
    }

    return damage;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> heights(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> heights[i];
    }

    vector<ll int> prefix, suffix(n + 1);
    prefix.push_back(0);
    suffix[0] = 0;

    for (int i = 1; i < n; i++)
    {
        if (heights[i] > heights[i + 1])
            prefix.push_back(heights[i] - heights[i + 1]);
        else
            prefix.push_back(0);
    }
    for (int i = 1; i <= n; i++) prefix[i] += prefix[i - 1];

    for (int i = n; i > 1; i--)
    {
        if (heights[i] > heights[i - 1])
            suffix[i] = heights[i] - heights[i - 1];
        else
            suffix[i] = 0;
    }
    for (int i = n - 1; i >= 1;i--) suffix[i]+=suffix[i+1];

    while (m--)
    {
        cout << solve(prefix, suffix) << endl;
    }
    return 0;
}
