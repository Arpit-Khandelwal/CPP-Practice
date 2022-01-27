//find pivot in sorted and rotated array
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int findPivotElement(vector<int> arr)
{
    int l = 0, h = arr.size() - 1, mid;
    while(l<h)
    {
        mid = l + (h - l) / 2;
        if(arr[mid]>=arr[0])
            l = mid + 1;
        else
            h = mid;
    }
    return l;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }

    cout << findPivotElement(arr) << endl;
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
