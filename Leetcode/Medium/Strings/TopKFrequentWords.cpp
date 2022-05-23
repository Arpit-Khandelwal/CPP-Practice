#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

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

void solve()
{
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
