#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve();
long long int minimum();
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t-->0)
        solve();
}
void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, i, count = 0;
    set<long long int> set;
    vector<long long int> s(n);
    for ( i = 0; i < n;i++) 
    {
        cin>>s[i];
        set.insert(s[i]);
    }
    while(set.max_size()!=1 && *(set.begin())!=1)
    {
        i = minimum(s);
    }
}
long long int minimum(vector<long long int> s)
{
    long long int min = *min_element(s.begin(), s.end());
    
}