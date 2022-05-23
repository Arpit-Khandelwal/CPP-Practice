#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

/*
int findAdjacentDuplicate(string s)
{
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        if (s[i] == s[i + 1])
            return i;
    }

    return -1;
}
string removeDuplicates(string s)
{
    
    int i = findAdjacentDuplicate(s);
    while (i != -1) //TLE
    {
        s = s.substr(0, i) + s.substr(i + 2);
        i = findAdjacentDuplicate(s);
    }

    return s;
    */
string removeDuplicates(string s)
{
    //using stack kinda approach
    string ans = "";
        
        for(char ch:s)
        {
            if(ans.size()>0 && ch == ans.back()) ans.pop_back();
            else ans.push_back(ch);
        }
        
        return ans;
}
void solve()
{
    string s;
    cin >> s;
    cout << removeDuplicates(s) << endl;
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



