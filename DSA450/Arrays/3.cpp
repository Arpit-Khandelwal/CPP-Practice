#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int findSmallest(int *arr, int l, int h, int k)
{
    /*primitive logic
    sort(arr, arr + h + 1);
    return arr[k - 1];
    */

    //using set, which are implemented in bst
    set<int> arr_set(arr, arr + h + 1);
    set<int>::iterator itr = arr_set.begin();

    while(--k>0)    //gives TLE
        itr++;
    //alternate of while loop - advance(arr,k-1);
    return *itr;
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> k;

    cout << findSmallest(arr, 0, n - 1, k) << endl;
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
