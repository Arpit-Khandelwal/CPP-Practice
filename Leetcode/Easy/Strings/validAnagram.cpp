#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
        return false;
    
    // sort s and t and check if they are same
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    try
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != t[i])
                return false;
        }
        return true;
    }
    catch (exception e)
    {
        return false;
    }

    //make int[26] array of alphabets
    //add 1 for each char of s and substract 1 for same char in t
    
    int chars[26];

    for (int i = 0; i < 26;i++) chars[i]=0;
    for (int i = 0; i < s.length();i++) chars[s[i] - 'a']++;
    for (int i = 0; i < t.length();i++) chars[t[i] - 'a']--;

    for (int i = 0; i < 26;i++) if(chars[i]!=0) return false;

    return true;

    //same can be done with hash table - best runtime and memory

    unordered_map<char, int> freq;

    for (int i = 0; i < 26;i++) freq[i+'a']=0;

    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i]]++;
        freq[t[i]]--;
    }

    for (int i = 0; i < 26;i++) 
    {
        if(freq[i+'a']!=0) return false;
    }

    //alt loop
    for(auto i:freq)
    {
        if(i.second!=0) return false;
    }

    return true;
}

void solve()
{
    string s, t;
    cin >> s >> t;

    cout << (isAnagram(s, t) ? "true" : "false") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
