#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

string reverseString(string &str, int i, int j) //pass by reference vvimp
{
    // Write your code here.
    // time taking
    /*
    if (str.length() == 1)
        return str;

    return reverseString(str.substr(1, str.length())) + str[0]; 
`   */

    //i,j recusion
    
    if(i>=j)
        return str;

    swap(str[i++], str[j--]);
    return reverseString(str, i, j);
    

    //no recusion STL - logic--
    reverse(str.begin(), str.end());
    return str;
}

string reverseString(string &str, int i)  //using single pointer
{
    int j = str.length() - i - 1;
    if(i>=j)
        return str;

    swap(str[i], str[j]);

    return reverseString(str, i+1);
}

void solve()
{
    string s;
    cin >> s;

    // cout<<reverseString(s, 0, s.length() - 1)<<endl;

    cout<<reverseString(s,0)<< endl;
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
