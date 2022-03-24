#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void nextPermutation(vector<int> &nums)
{
    int n = nums.size();

    int i = n - 2;

    while (i >= 0 && nums[i + 1] <= nums[i]) i--;

    if (i >= 0)
    {
        int j = n - 1;

        while (nums[j] <= nums[i]) j--;

        swap(nums[i], nums[j]);
    }
    
    int l = i+1, h = nums.size() - 1;

    while (l < h)
    {
        swap(nums[l], nums[h]);
        l++;
        h--;
    }

    return;
}

void solve()
{
    int n;
    cin >> n;
    int x;

    vector<int> nums;
    while (n--)
    {
        cin >> x;
        nums.push_back(x);
    }

    nextPermutation(nums);

    for (auto i : nums)
        cout << i;

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
