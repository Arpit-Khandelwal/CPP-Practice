#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void rotate(vector<int> &nums, int k)
{
    //logic 2
    int n = nums.size();
    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)
        arr[(i + k) % n] = nums[i];
    swap(arr, nums);
    arr.clear();
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    rotate(arr, k);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
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
