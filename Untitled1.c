#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,power=0;
    cin>>n;
    while(n/2>=1) power++;
    cout<<(pow(2,power)-1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t-->0){solve();}
}
