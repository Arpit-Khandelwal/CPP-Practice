#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    //using bubble sort
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
                swap(nums[j], nums[j + 1]);
        }
    }

    //using counts - 0 runtime
    int count0 = 0, count1 = 0, count2=0;

    for (auto i : nums)
    {
        if (i == 1)
            count1++;
        if (!i)
            count0++;
        if(i==2)
            count2++;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (count0 > 0)
        {
            nums[i] = 0;
            count0--;
        
        }
        else if(count1>0)
        {
            nums[i] = 1;
            count1--;
        }
        else if(count2>0)
        {
            nums[i] = 2;
            count2--;
        }
    }
}