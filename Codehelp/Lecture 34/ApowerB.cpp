#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#include <chrono>
using namespace std::chrono;

long long int power(int a, int b)
{
    if(b==0)
        return 1;
    if (b == 1)
        return a;
    // return a * power(a, b - 1); //tedious and takes too much compute

    int ans = power(a, b / 2);


    if(b%2) //b is odd
        return a * ans * ans;
    else    //b is even
        return ans * ans;
}

void solve()
{
    int a, b;
    cin >> a >> b;

    cout << power(a, b) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test = 1;
    cin >> test;

    while (test--)
    {
        solve();
    }
    return 0;
}
