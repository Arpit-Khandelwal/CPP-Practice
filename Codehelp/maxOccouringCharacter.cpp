char getMaxOccuringChar(string str)
{
    unordered_map<char, int> count;
    char ans;

    for (char i : str)
        count[i]++;

    int maxi = 0;
    for (auto i : count)
    {
        if (i.second > maxi)
        {
            maxi = i.second;
            ans = i.first;
        }
        if (i.second == maxi)
            ans = min(i.first, ans);
    }
    return ans;
}