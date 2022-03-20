#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    long long a[N];

    for (int i = 0; i < N; i++)
        a[i] = arr[i];

    sort(a, a + N);

    int count = 0;
    for (int i = 0; i < N;i++)
    {
        if(a[i]==arr[i])
            continue;

        long long mini = arr[i];
        for (int j = i+1; j < N;j++)
        {
            mini = min(arr[j], mini);
        }
        swap(mini, arr[i]);
        count++;
    }

    return count;
}

void solve()
{
    int n;
    cin >> n;

    long long arr[n];

    for (int i = 0; i < n; i++)
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
