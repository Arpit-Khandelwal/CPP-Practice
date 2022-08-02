#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int mod(int n) { return n % MOD; }
int add(long long int a, long long int b) { return mod(0LL + mod(a) + mod(b)); }

int perfectSum(int arr[], int n, int sum)
{
    // Your code goes here
    int dp[(int)1e6 + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = sum; j >= arr[i]; j--)
            dp[j] = add(dp[j], dp[j - arr[i]]);
    }

    return dp[sum];
}

int main()
{
    int n, sum;
    cin >> n >> sum;

    int arr[n];
    for (int i = 0; i < n;i++) cin>>arr[i];

    cout << perfectSum(arr, n, sum);
}