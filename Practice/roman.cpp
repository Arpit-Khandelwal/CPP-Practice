#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

string replace(string s1,string s2,string s3)
{
    size_t index = 0;
    while (true)
    {
        /* Locate the substring to replace. */
        index = s1.find(s2, index);
        if (index == std::string::npos)
            break;

        /* Make the replacement. */
        s1.replace(index, s2.length(), s3);

        /* Advance index forward so the next iteration doesn't pick it up as well. */
        index += s2.length();
    }
}

void solve()
{
    int n;
    cin >> n;

    string s = "";

    for (int i = 0; i < n / 1000; i++)
        s += "M";
    n %= 1000;

    for (int i = 0; i < n / 500; i++)
        s += "D";
    n %= 500;
    for (int i = 0; i < n / 100; i++)
        s += "C";
    n %= 100;
    for (int i = 0; i < n / 50; i++)
        s += "L";
    n %= 50;
    for (int i = 0; i < n / 10; i++)
        s += "X";
    n %= 10;

    for (int i = 0; i < n / 5; i++)
        s += "V";
    n %= 5;
    for (int i = 0; i < n; i++)
        s += "I";

    cout << "\n"
         << s;
    
    s=replace(s,"CCCC","CD");
    s=replace(s,"LLLL","LC");
    s=replace(s,"XXXX","XL");
    s=replace(s,"IIII","IV");
    cout <<"\n"<<s;
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
