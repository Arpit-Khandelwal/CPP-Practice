//https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

struct Pair
{
    int min;
    int max;
};

//tournament method

struct Pair findMinMax(int arr[], int low, int high)
{
    struct Pair minmax, mml, mmr;
    if (low==high) 
    {
        minmax.max = arr[low];
        minmax.min = arr[low];
        return minmax;
    }

    if(high == low+1)
    {
        minmax.max = max(arr[low], arr[high]);
        minmax.min = min(arr[low], arr[high]);
        return minmax;
    }

    int mid = (low + high) / 2;
    mml = findMinMax(arr, low, mid);
    mmr = findMinMax(arr, mid, high);

    minmax.min = min(mml.min, mmr.min);
    minmax.max = max(mml.max, mmr.max);
    return minmax;
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int max = INT_MIN, min = INT_MAX;
    /*linear search
    for(int i=0; i < n; i++)
    {
        if(arr[i]>max)
            max = arr[i];
        if(arr[i]<min) min = arr[i];
    }
    */

    //tournament method
    struct Pair ans = findMinMax(arr, 0, n-1);
    max = ans.max;
    min = ans.min;
    cout << max << " " << min;
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
