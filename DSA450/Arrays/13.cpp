#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

//find contigous subarray which has max sum
void solve()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int max_sum, curr_sum;
    max_sum = arr[0];
    curr_sum = arr[0];

    for (int i = 1; i < n; i++)
    {
        curr_sum = max(arr[i], arr[i] + curr_sum);
        max_sum = max(max_sum, curr_sum);
    }

    cout << max_sum << endl;
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
