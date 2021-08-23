#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n,p,k;
    cin>>n>>p>>k;
    int count=0;
    for(int i=0;i<=n;i++)
    {
        count++;
        if(i==p) break;
        count++;
        if((i+k)==p){count++;break;}
        
    }
    cout<<count<<endl;
}
int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}