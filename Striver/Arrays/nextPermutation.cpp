#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void nextPermutation(vector<int> &nums)
{

    int n = nums.size();
    if (n == 1)
        return;

    int pos = n - 2;
    while (pos > 0 && nums[pos] > nums[pos - 1])
        pos--;

    int j = n - 1;
    if (pos >= 0)
    {
        while (j >= 0 && nums[j] <= nums[pos])
            j--;
    }

    swap(nums[pos], nums[j]);

    // reverse(nums,i+1,n-1);
    pos++;
    j = n - 1;
    while (pos <= j)
        swap(nums[pos++], nums[j--]);
}

void solve()
{
    vector<int> nums = {1, 2, 3};
    nextPermutation(nums);
    for(int i:nums)
        cout << i << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test = 1;
    // cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
