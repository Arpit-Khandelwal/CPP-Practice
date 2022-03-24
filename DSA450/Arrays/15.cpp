#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void nextPermutation(vector<int> &nums)
{
    
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

    for(auto i : nums)
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
