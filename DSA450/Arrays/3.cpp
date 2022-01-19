#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int findSmallest(int *arr, int l, int r, int k)
{
    /*primitive logic
    sort(arr, arr + r + 1);
    return arr[k - 1];
    */

    /*using set, which are implemented in bst
    set<int> arr_set(arr, arr + r + 1); //O(nlogn)
    set<int>::iterator itr = arr_set.begin();

    while(--k>0)    //gives TLE
        itr++;
    //alternate of while loop - advance(arr,k-1);
    return *itr;
    */

   /*using map
    map<int, int> count;
    for (int i = l; i <= r;i++)
        count[arr[i]]++;        //O(nlogn)
    
    int freq = 0;
    for(auto i:count)
    {
        freq += i.second;
        if(freq>=k)
            return i.first;
    }
    return -1;
    */
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
