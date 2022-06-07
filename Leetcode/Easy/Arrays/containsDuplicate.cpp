#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{

    /*
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
            if(!(nums[i]^nums[i+1])) return true;
        return false;
        */

    unordered_set<int> arr;
    for (int num : nums)
    {
        if (arr.find(num) != arr.end())
            return true;
        arr.insert(num);
    }
    return false;

    // method 2
    unordered_map<int, bool> map;

    for (int i : nums)
    {
        if (map[i]) return true;
        map[i] = true;
    }
    return false;
}