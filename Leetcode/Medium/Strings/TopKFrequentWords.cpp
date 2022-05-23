static bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.second > b.second)
        return true;
    else if (a.second == b.second && a.first.compare(b.first) <= 0)
        return true;
    else
        return false;
}
vector<string> topKFrequent(vector<string> &words, int k)
{
    unordered_map<string, int> freq;

    for (string i : words)
        freq[i]++;

    vector<pair<string, int>> vFreq;

    for (auto &itr : freq)
    {
        vFreq.push_back(itr);
    }

    sort(vFreq.begin(), vFreq.end(), cmp);

    // for(auto i:vFreq) cout<<i.first<<": "<<i.second<<endl;

    vector<string> ans;
    for (int i = 0; i < k; i++)
        ans.push_back(vFreq[i].first);

    return ans;
}