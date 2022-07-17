#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

string reverseString(string str)
{
    // Write your code here.
    if (str.length() == 1)
        return str;

    return reverseString(str.substr(1, str.length())) + str[0];
}

void solve()
{
    string s;
    cin >> s;

    cout << reverseString(s)<<endl;
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
