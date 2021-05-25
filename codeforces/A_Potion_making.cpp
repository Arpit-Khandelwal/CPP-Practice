#include<iostream>
#include<bits/c++.h>
using namespace std;
int main()
{
    cin>>t;
    while (t-->0) solve();
}
void solve()
{
    int k;
    cin>>k;
    if(k>50) k-=50;
    int hcf;
    for (int i=2; i<k; i++)
    {
        if(k%i==0 && (100-k)%i==0)  hcf=i;
    }
    cout<<hcf;
}