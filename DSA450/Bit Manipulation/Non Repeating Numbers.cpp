
vector<int> singleNumber(vector<int> nums)
{
    int xorred = 0;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        xorred ^= nums[i];
    }
    int set_bit = xorred & ~(xorred - 1);
    //set_bit = the bit where both numbers are diff
    /*
        eg. 1,2,3,4,2,1, xor = 7(111)
        set_bit = 111 & ~(111-1) = 111 & ~(110) = 111 & 011 = 011, these 3 bits are diff in distinct numbers
        1 xor 7 = 110;6 - grp2
        2 xor 7 = 101;5 - grp1
        3 xor 7 = 100;4 - grp2
        4 xor 7 = 011;3 - grp1
    */

    vector<int> grp1;
    vector<int> grp2;
    int dist1 = 0, dist2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] & set_bit)
            dist1 ^= nums[i]; //xorring all grp1 elements, duplicates cancel out, only distinct number left
        else
            dist2 ^= nums[i]; //xorring all grp2 elements, duplicates cancel out, only distinct number left
    }

    ans.push_back(dist1);
    ans.push_back(dist2);
    sort(ans.begin(), ans.end());
    return ans;

    /* counting all occourences and storing in map
    map<int,int>count;
        vector<int>ans;
        for(auto num:nums)
        {
            count[num]++;
        }
        
        for(auto i:count)
        {
            if(i.second==1) ans.push_back(i.first);
        }
        return ans;
    */
}