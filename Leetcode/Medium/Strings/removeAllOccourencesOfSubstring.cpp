// https://leetcode.com/problems/remove-all-occurrences-of-a-substring

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


string removeOccurrences(string s, string part)
{
    while (s.find(part) != string::npos)
    {
        s = s.substr(0, s.find(part)) + s.substr(s.find(part) + part.length()); //4ms, 8MB
        s.erase(s.find(part),part.length()) //12ms, 6.6MB
    }
    return s;
}

void solve()
{
    string s, part;
    cin >> s >> part;

    cout << removeOccurrences(s, part) << endl;
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

