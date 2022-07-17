#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

string reverseString(string str, int i, int j)
{
    // Write your code here.
    // time taking
    /*
    if (str.length() == 1)
        return str;

    return reverseString(str.substr(1, str.length())) + str[0]; 
`   */

    /*i,j recusion
    if(i>=j)
        return str;

    swap(str[i++], str[j--]);
    return reverseString(str, i, j);
    */
    //no recusion STL - logic--
    reverse(str.begin(), str.end());
    return str;
}

void solve()
{
    string s;
    cin >> s;

    cout<<reverseString(s, 0, s.length() - 1);
    // cout<<s<< endl;
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
