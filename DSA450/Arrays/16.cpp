#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    long long int count = 0;
    for (long long int i = 0; i < N; i++)
    {
        for (long long int j = i + 1; j < N; j++)
        {   //bruteforce logic
            if (arr[i] > arr[j])
                count++;
        }
    }
    return count;
}

void solve()
{
    long long int n;
    cin >> n;
    long long int arr[n];

    for (long long int i = 0; i < n; i++)
        cin >> arr[i];

    cout << inversionCount(arr, n) << endl;
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
