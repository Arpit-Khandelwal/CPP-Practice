#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;

    string s = "";

    for (int i = 0; i < n / 1000;i++)
        s += "M";
    n %= 1000;

    for (int i = 0; i < n / 500;i++)
        s += "D";
    n %= 500;
    for (int i = 0; i < n / 100;i++)
        s += "C";
    n %= 100;
    for (int i = 0; i < n / 50;i++)
        s += "L";
    n %= 50;
    for (int i = 0; i < n / 10;i++)
        s += "X";
    n %= 10;

    for (int i = 0; i < n / 5;i++)
        s += "V";
    n %= 5;
    for (int i = 0; i < n ;i++)
        s += "I";

    cout <<"\n"<< n << " : " << s;
    try
    {
        /* code */
        s = s.replace(s.find("CCCC",0), 4, "CD");
    s = s.replace(s.find("LLLL",0), 4, "LC");
    s = s.replace(s.find("XXXX",0), 4, "XL");
    s = s.replace(s.find("IIII",0), 4, "IV");
    cout <<"\n"<< n << " : " << s;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    

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
