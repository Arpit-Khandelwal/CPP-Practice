#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool validMountainArray(vector<int> &arr)
{

    bool up = false, down = false;

    int i = 0, n = arr.size();

    if (n < 3)
        return false;
    while (arr[i] < arr[i + 1])
    {
        up = true;
        i++;
        if (i == n - 1)
            return false;
    }
    cout << i;
    while (arr[i] > arr[i + 1])
    {
        down = true;
        i++;
        if (i == n - 1)
            break;
    }

    // cout<<up<<" "<<down;
    if (i != n - 1)
        down = false;

    return up & down;
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

    cout << validMountainArray(arr)<<endl;
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
