#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

long long int findFallDamage(vector<int> heights, int a, int b)
{
    ll int damage = 0;

    return damage;
}

long long int solve(vector<int> heights, int n)
{
    int a, b;
    cin >> a >> b;

    ll int damage = 0;
    if (a < b)
    {
        for (int i = a; i < b; i++)
        {
            if (heights[i] > heights[i + 1])
                damage += heights[i + 1] - heights[i];
        }
    }
    else
    {
        for (int i = b; i > a;i--)
        {
            if(heights[i]>heights[i-1])
                damage += heights[i] - heights[i - 1];
        }
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

    vector<int> heights(n);
    heights.push_back(-1);
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        heights.push_back(x);
    }

    while (m--)
    {
        cout << solve(heights, n) << endl;
    }
    return 0;
}
