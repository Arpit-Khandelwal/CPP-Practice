#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (k >= n)
    {
        cout << "-1\n";
        return;
    }

    int max_sum = 0, sum = 0;
    int window_start = 0, window_end = k;
    for (int i = window_start; i < window_end; i++)
        sum += arr[i];
        
    while (window_end < n)
    {
       
        window_start++;
        window_end++;
        sum -= arr[window_start - 1];
        sum += arr[window_end - 1];
        max_sum = max(max_sum, sum);
         cout << "Sum: " << sum << " Max sum: " << max_sum<<endl;
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
