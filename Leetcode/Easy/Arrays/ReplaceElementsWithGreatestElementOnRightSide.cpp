#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

vector<int> replaceElements(vector<int> &arr)
{
    //Runtime: 1101 ms, faster than 13.51%
    //Memory Usage: 14.4 MB, less than 98.99% 
    int maxi, n = arr.size();

    if (n == 1)
    {
        arr[n - 1] = -1;
        return arr;
    }
    for (int i = 0; i < n - 1; i++)
    {
        maxi = arr[i + 1];
        for (int j = i + 1; j < n; j++)
            maxi = max(maxi, arr[j]);
        arr[i] = maxi;
    }
    arr[n - 1] = -1;
    return arr;
}

void solve()
{
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    arr = replaceElements(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
