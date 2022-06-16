#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

vector<int> twoSum(vector<int> &nums, int target)
{
    /*O(N^2) - bruteforce
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
            if (nums[i] + nums[j] == target)
                return vector<int>{i, j};
    }
    return vector<int>{-1};
    */

    //hashmap
    map<int, int> hashmap;
    for (int i = 0; i < nums.size(); i++)
        hashmap.insert(nums[i], i);
    for (int i = 0; i < nums.size(); i++)
    {
        if (hashmap.find(target - nums[i]) != hashmap.end())
            return vector<int>{i, hashmap.find(target - nums[i])->second};
    }
    return vector<int>{-1}; 
}

void solve()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    cout << result[0] << " " << result[1] << endl;
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
