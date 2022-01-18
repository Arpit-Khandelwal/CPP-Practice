#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void moveZeroes(vector<int> &nums)
{
    /*inefficient
    int i = 0, j = 0;
    int n = nums.size();
    while (i < n && j < n)
    {
        if (nums[i] != 0)
            i++;
        if (nums[j] == 0)
            j++;
        swap(nums[i], nums[j]);
    }
    */
    for (int p = 0, q = 0; q < nums.size(); q++)
        if (nums[q] != 0)
            swap(nums[p++], nums[q]);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    moveZeroes(arr);

    for (auto x : arr)
        cout << x << " ";
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
