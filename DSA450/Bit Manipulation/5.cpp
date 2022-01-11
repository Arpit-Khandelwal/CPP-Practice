#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool isPowerofTwo(long long n){
        
        // Your code here   
        if(n==0) return false;
        float ans = log(n)/log(2);
        
        if(floor(ans)==ans) return true;
        else return false;
        
    }

void solve()
{
    int n;
    cin >> n;
    if(isPowerofTwo(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
