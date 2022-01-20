#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

vector<int> twoSum(vector<int> &nums, int target)
{
    //O(N^2) - bruteforce
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
            if (nums[i] + nums[j] == target)
                return vector<int>{i, j};
    }
    return vector<int>{-1};
}

void solve()
{
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
