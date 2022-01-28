#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int sqrtBinary(int n)
{
    int l = 0, h = n;
    int mid = l + (h - l) / 2;
    int ans = -1;
    while(l<=h)
    {
        int sq = mid * mid;
        if( sq == n)
            return mid;
        if(sq<n) {
            ans = mid;
            l = mid + 1;
        }
        else
            h = mid - 1;
        mid = l + (h - l) / 2;
    }
    return ans;
}

double precisionSqrt(int n, int precision)
{
    double factor = 1;
    double ans = sqrtBinary(n);
    for (int i = 0; i < precision;i++)
    {
        factor /= 10;
        for (double j = ans; j * j < n;j+=factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    cout << sqrtBinary(n) << endl;

    cout << precisionSqrt(n,3) << endl;
    return 0;
}
