
int singleNumber(vector<int> &nums)
{

    int xorred = 0;
    for (int i = 0; i < nums.size(); i++)
        xorred ^= nums[i];
    return xorred;
}