#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin>>n; 

    //flip all 1 to 0 and 0 to 1
    //eg. input=5(101), output = ~(101)=010=2
/*
    string s[n];
    int l = 0, temp=n;
    while(temp>0)
    {
        l++;
        temp /= 10;
    }
    temp = n;
    for (int i = 0; i < l; i++)
    {
        s[i] = (char)((temp % 10) + 48) ;
        temp /= 10;
    }

    cout << s;
    */

   int temp=0;
   while(temp<n)
       temp = 2 * temp + 1; //make a 11111 number with n's number of digits
    cout<< (temp ^ n);   //eg n=5(101) and temp will be 111, therefore, 111^101=010 =output
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
        cout << endl;
    }
    return 0;
}
