
vector<int> singleNumber(vector<int> nums)
{
    int xorred = 0;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        xorred ^= nums[i];
    }
    int set_bit = xorred & ~(xorred - 1);

    vector<int> grp1;
    vector<int> grp2;
    int dist1 = 0, dist2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] & set_bit)
            dist1 ^= nums[i];
        else
            dist2 ^= nums[i];
    }

    ans.push_back(dist1);
    ans.push_back(dist2);
    sort(ans.begin(), ans.end());
    return ans;
}