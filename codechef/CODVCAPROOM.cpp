#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll k = 1;
    cin >> k;

    vector<int> values;
    int temp;
    while (cin >> temp)
        values.push_back(temp);

    int n = values.size();

    vector<int> count(n, 0);

    for (int i = 1; i <= n; i++)
    {
        count[values[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (count[i] == 1)
        {
            cout << i << "\n";
            break;
        }
    }

    return 0;
}