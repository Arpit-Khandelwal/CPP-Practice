#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> arr, int index, vector<int> output, vector<vector<int>> &ans)
{
    if (index >= arr.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude arr[index]
    solve(arr, index + 1, output, ans);

    // include
    output.push_back(arr[index]);
    solve(arr, index + 1, output, ans);
}
vector<vector<int>> subsets(vector<int> &nums)
{

    vector<int> output;
    vector<vector<int>> ans;
    solve(nums, 0, output, ans);

    return ans;
}
