#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int firstUniqChar(string s)
{
    //using hashmap to count all characters number of occourences
    /*
    unordered_map<char,int> map;
    int l = s.length();

    for (int i = 0; i < l;i++)
    {

        map[s[i]]++;
    }

    for (int i = 0; i < l;i++)
    {
        if(map[s[i]]==1)
            return i;
    }
    return -1;
    */

    //using fixed char[27]
    int l = s.length();
    char arr[27];
    for (int i = 0; i < 27; i++) arr[i] = 0;


    for (int i = 0; i < l; i++) arr[s[i] - 'a']++;

    for (int i = 0; i < l;i++)

    {
        if(arr[s[i] - 'a'] == 1)
            return i;
    }
    return -1;
}

void solve()
{
    string s;
    cin >> s;

    cout << firstUniqChar(s) << endl;
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
