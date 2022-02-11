#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
/*
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
    int count0 = 0, count1 = 0, count2 = 0;

    for (auto i : nums)
    {
        if (i == 1)
            count1++;
        if (!i)
            count0++;
        if (i == 2)
            count2++;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (count0 > 0)
        {
            nums[i] = 0;
            count0--;
        }
        else if (count1 > 0)
        {
            nums[i] = 1;
            count1--;
        }
        else if (count2 > 0)
        {
            nums[i] = 2;
            count2--;
        }
    }

    //using count alternate method - 4ms runtime
    int count0 = 0, count1 = 0, count2 = 0;

    for (auto i : nums)
    {
        if (i == 1)
            count1++;
        if (!i)
            count0++;
        if (i == 2)
            count2++;
    }
    int i = 0;
    for (; i < count0; i++)
        nums[i] = 0;
    for (; i < count1 + count0; i++)
        nums[i] = 1;
    for (; i < nums.size(); i++)
        nums[i] = 2;

*/
    //one pass in place - from leetcode discuss
    //0ms runtime

    //take 3 pointers n0, n1, n2 - which denote last position of 0, 1, 2 in array

    int n0 = -1, n1 = -1, n2 = -1;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] == 0)
        {
            //for each encounter of 0, push last occourence of 1 and 2 forward
            //and push 0 into latest position
            nums[++n2] = 2;
            nums[++n1] = 1;
            nums[++n0] = 0;
        }
        else if (nums[i] == 1)
        {
            //for each encounter of 1, push last pos of 1 and 2 foward, 0's need not be modified
            nums[++n2] = 2;
            nums[++n1] = 1;
        }
        else if (nums[i] == 2)
        {
            //each encounter of 2, push last pos of 2 forward
            nums[++n2] = 2;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums;
    for (int o = 0; o < n;o++) 
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    sortColors(nums);

    for (int o = 0; o < n;o++) 
    {
        cout << nums[o] << " ";
    }
}