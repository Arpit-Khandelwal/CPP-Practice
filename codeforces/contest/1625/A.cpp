#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n, l;
    cin >> n >> l;
    vector<ll int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    vector<ll int> y(l, 0);
    int index = l;
    while (index > 0)
    {
        int i = 0;
        int count1 = 0;
        int count0 = 0;
        while (i < n)
        {
            if (arr[i] & 1)
                count1++;
            else
                count0++;
            arr[i++] >>= 1;
        }
        y[--index] = (count1 > count0) ? 1 : 0;
    }
    //cout << endl;

    int ans = 0;
    int power2 = 1;
    for (int i = 0; i < l; i++)
    {
        ans += y[i] * power2;
        //cout << "power2 " << power2 << "\tAns: "<<ans<<"\t l: "<<l<<endl;
        power2 <<= 1;
    }
    //        cout <<"Ans :"<< ans << endl;
    cout << ans << endl;
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
