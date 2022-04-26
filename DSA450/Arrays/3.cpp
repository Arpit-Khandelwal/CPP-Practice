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
    // code here
    /*
    sort(arr,arr+r-l+1);

    return arr[k-1];
    */

    int n = r-l + 1;
    for (int i = 0; i < n; i++)
    {
        int mini = arr[i], pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if(mini>arr[j])
            {
                mini = arr[j];
                pos = j;
            }
        }
        swap(arr[i], arr[pos]);
        if (i + 1 == k)
            return arr[i];
    }
    //for(int i=0;i<n;i++) cout<<arr[i]<<" ";
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
