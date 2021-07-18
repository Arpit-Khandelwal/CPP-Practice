#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

vector<int> a(30, -1);
int fib(int n)
{
    if(n<=1) {
        a[n] = n;
        return a[n];
    }
    if(a[n-1]==-1)
        a[n - 1] = fib(n - 1);
    if(a[n-2]==-1)
        a[n - 2] = fib(n - 2);
    return a[n - 1] + a[n - 2];
    }

void solve()
{
    int n;
    cin>>n;
    for (int i = 0; i< n;i++)
        cout << a[i] << " ";
        cout << fib(n);
    for (int i = 0; i< n;i++)
        cout << a[i] << " ";
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
