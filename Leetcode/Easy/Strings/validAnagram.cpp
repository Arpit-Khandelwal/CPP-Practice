#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool isAnagram(string s, string t)
{
    if(s.length()!=t.length())
        return false;
    //sort s and t and check if they are same
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
try{
    for (int i = 0; i < s.length();i++)
    {
        if(s[i]!=t[i])
            return false;
    }
    return true;
}
catch(exception e){
    return false;
}
}

void solve()
{
    string s, t;
    cin >> s >> t;

    cout <<( isAnagram(s, t)?"true":"false") << endl;
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
