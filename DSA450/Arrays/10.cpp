#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int minJumps(int arr[], int n)
{
    // Your code here
    int count = 0;
    for (int i = 0; i < n - 1;)
    {
        if (arr[i] == 0)
            return -1;
        i += arr[i];
        count++;
    }
    return count;
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];
    cout << minJumps(arr, n) << endl;

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
