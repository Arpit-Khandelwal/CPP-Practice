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
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    //logic 1 to rotate array
    d %= n;
    int k = 0;

    for (int i = d + 1; i < n - 2;)
    {
        for (int x = 0; x < 3; x++)
        {
            arr[k + x] += arr[i + x];
            arr[i] = arr[k] - arr[i];
            arr[k] -= arr[i];
        }
        k = i;
        i += d;
    }
    ///print array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test = 1;
    //cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
