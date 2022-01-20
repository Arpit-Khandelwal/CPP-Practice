unordered_map<int, int> hashmap;
    for (int i = 0; i < nums.size(); i++)
        hashmap.insert(nums[i], i);
    for (int i = 0; i < nums.size(); i++)
    {
        if (hashmap.find(target - nums[i]) != hashmap.end())
            return vector<int>{i, hashmap.find(target - nums[i])->second};
    }
    return vector<int>{-1}; 