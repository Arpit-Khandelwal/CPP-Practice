#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int a, q;
    cin >> a >> q;

    vector<int> difficulty;
    int x;
    for (int i = 0; i < a;i++)
    {
        cin >> x;
        difficulty.push_back(x);
    }
    //input done
    string s = "";
    for (int i : difficulty)
    {
        if (q <= 0)
            break;

        else if (i > q)
        {
            q--;
            s += "0";
        }
        else
        {
            s += "1";
        }

        cout << s << endl;
    }
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
