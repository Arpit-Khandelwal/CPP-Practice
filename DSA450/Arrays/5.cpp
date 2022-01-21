#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    // int n;
    // cin >> n;
    // int arr[n];

    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];

    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr) / sizeof(arr[0]);
    /*
    int l = 0, h = n - 1;
    while(l<h)
    {
        if(arr[l]>0)
        {
            if(arr[h]<0)
            {
                swap(arr[l],arr[h]);
                h--;
                l++;
            }
            else
                h--;
        }
        else
            l++;
    }
    */
/*
    //logic - 21Jan22, using two pointers to track positive and negative elements, same approach as above
    for (int i = 0, j = n - 1; i <= j;)
    {
        while (arr[i] < 0) i++;
        while (arr[j] > 0) j--;

        if(i<=j){
        swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
*/

    //less precise logic - swap all negative array elements from starting of array
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0 && i!=j) swap(arr[i],arr[j++]);
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
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
