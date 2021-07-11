#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll int N;
    cin>>N;
    cout << pow(N, 2)<<" "; //sum of odd N terms=N^2
    cout << pow(N, 2) + N; //sum of even N terms=N^2+N
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
