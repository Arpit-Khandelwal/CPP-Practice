// /https://practice.geeksforgeeks.org/problems/count-total-set-bits-1587115620/1#

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int countSetBits(int n)
{
    // Your logic here
    //recursion
    if (n == 1)
        return 1;
    else
    {
        int num = n;
        int count = 0;
        while (num > 0)
        {
            count += num & 1;
            num >>= 1;
        }
        return count + countSetBits(n - 1);
    }
}

void solve()
{

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
        int n;
        cin >> n;

        cout << countSetBits(n) << endl;
    }
    return 0;
}
