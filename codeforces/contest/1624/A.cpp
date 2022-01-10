#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int solve()
{
    int n, x, maximum = -1, minimum = INT_MAX;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (x > maximum)
            maximum = x;
        if (x < minimum)
            minimum = x;
    }

        return maximum - minimum;
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
        cout << solve() << endl;
    }
    return 0;
}
