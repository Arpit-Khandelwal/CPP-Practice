#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int binarySearch(long long a[], long long n, long long k)
{
    k++;
    int l = 0, h = n - 1, mid;
    while (l < h)
    {
        mid = l + ((h - l) / 2);
        if (a[mid] > k)
            h--;
        else if (a[mid] < k)
            l++;
        else
            return mid;
    }
    return -1;
}

long long int inversionCount(long long arr[], long long n)
{
    // Your Code Here

    long long a[n];
    copy(arr, arr + n, a);
    sort(a, a + n);

    long long int count = 0;

    for (long long int i = 0; i < n; i++)
    {
        int index = binarySearch(a, n, arr[i]);

        if (index == -1)
            continue;
        else
        {
            swap(a[index], arr[i]);
            count++;
        }
        /*
        for (long long int j = i + 1; j < N; j++)
        {   //bruteforce logic
            if (arr[i] > arr[j])    //TLE
                count++;
        }

        */
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
