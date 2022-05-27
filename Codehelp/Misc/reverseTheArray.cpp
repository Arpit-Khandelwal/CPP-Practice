#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

// https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298

void reverseArray(vector<int> &arr, int m)
{
    int n = arr.size();
    m++;
    n--;
    while (m < n)
    {
        swap(arr[m++], arr[n--]);
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int x;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }

    reverseArray(arr, m);

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
