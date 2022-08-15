#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void findCombinations(vector<int> &nums, int index, int target, vector<int> &temp, vector<vector<int>> &ans)
{
    if (target == 0)
    {
        ans.push_back(temp);

        return;
    }

    for (int i = index; i < nums.size(); i++)
    {
        if (i > index && nums[i] == nums[i - 1])
            continue;
        if (nums[i] > target)
            break;

        temp.push_back(nums[i]);
        findCombinations(nums, i + 1, target - nums[i], temp, ans);
        temp.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{

    vector<int> temp;
    vector<vector<int>> ans;

    sort(candidates.begin(), candidates.end());
    findCombinations(candidates, 0, target, temp, ans);

    // vector<vector<int>> uniqueAns;
    // for(auto i:ans)
    // {
    //     uniqueAns.push_back(i);
    // }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int target, n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cin >> target;

    vector<vector<int>> ans = combinationSum2(nums, target);

    for (auto i : ans)
    {
        for (int j : i)
            cout << j;
        cout << endl;
    }
}
