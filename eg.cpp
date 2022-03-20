#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    multiset<int> num;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        num.insert(x);
    }

    sort(num.begin(), num.end());

    int cost = 0;
    int index = 0;
    int sum = 0;

    while (num.lower_bound(1) != num.end())
    {
        multiset<int>::iterator itr = num.lower_bound(1);

        sum = *(num.lower_bound(1)) + *(++itr);

        num.erase(num.lower_bound(1));


        index += 2;
        cost += sum;

        num.insert(sum);
    }

    cout << cost;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        solve();
    return 0;
}
