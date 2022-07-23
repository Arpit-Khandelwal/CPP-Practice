#include<bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int> &nums)
{
    int n = nums.size();
    // sort(nums.begin(),nums.end(),comp);

    vector<int> ans(n);
    int pos = n - 1;
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (abs(nums[i]) <= abs(nums[j]))
            ans[pos--] = pow(nums[j--], 2);
        else
            ans[pos--] = pow(nums[i++], 2);
    }

    return ans;
}