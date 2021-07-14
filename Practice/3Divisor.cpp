/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin>>n;
    int count=0;
    for (int i = 2; i <= n;i++) if(ceil(sqrt(n))==floor(sqrt(n)))
            count++;
    cout << count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
*/
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<cmath>
#include<iostream>
using namespace std;
#define ll long long

bool isPrime(ll int n)
    {
        for(int i=2;i<=sqrt(n);i++) if(n%i==0) return false;
        return true;
    }
    
int divisors(ll int N)
    {
        int c=0;
        for(ll int i=2;i<=sqrt(N);i++) 
        {
            if(isPrime(i))      //if i is prime then i^2 will be prime too 
            {
                {cout<<i<<" "<<i*i<<endl;c++;}
            }
        }
        return c;
    }
    
int main()
{
    cout<<divisors(999999);
    return 0;
}
