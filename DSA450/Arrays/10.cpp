#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int minJumps(int arr[], int n)
{
    // Your code here
    int count = 0;
    // logic -1 -> jump as per array element - logical error
    /*
    for (int i = 0; i < n - 1;)
    {
        if (arr[i] == 0)
            return -1;
        i += arr[i];
        count++;
    }
    */

    // flawed logic
    /*
    int i, j;
    for (i = 0; i < n;)
    {
        if (arr[i] == 0)
            return -1;
        int maxRange = INT_MAX;
        int pos = -1;

        if (arr[i] >= n - 1)
            return count;

        for (j = i + 1; j <= i + arr[i]; j++)
        {
            int range = n - 1 - j;
            int jump = range - arr[j];
            if (jump <= 0)
                return ++count;
            if (maxRange > jump)
            {
                maxRange = jump;
                pos = j;
            }
        }
        i = pos;
        count++;
    }
    */

    // mohit logic
    /*
    int i, j, k;
    for (i = 0; i < n - 1; i = k)
    {
        if (arr[i] == 0)
            return -1;
        for (j = i + 1, k = i + 1; j <= i + arr[i]; j++)
        {
            if (j >= n)
                return ++count;
            if (arr[j] + j > arr[k] + k)
                k = j;
        }
        count++;
    }
    return count;
    */

    // my-logic
    int jumps = 1;
    int maxNode = arr[0];
    int stepsLeft = arr[0];
    int tempMaxSteps = arr[0];

    if (n == 1)
        return 0;

    if (arr[0] == 0 && n > 1)
        return -1;

    for (int i = 1; i < n; i++)
    {
        stepsLeft--;

        if (arr[i] == 0)
            return -1;

        if (maxNode >= n - 1)
            return jumps;

        if (arr[i] + i >= n - 1)
            return ++jumps;

        if (arr[i] + i > maxNode)
        {
            maxNode = arr[i] + i;
        }

        tempMaxSteps = max(tempMaxSteps, arr[i]);
        if (stepsLeft == 0)
        {
            jumps++;
            stepsLeft = maxNode - i;
        }
    }

    return jumps;
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
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
