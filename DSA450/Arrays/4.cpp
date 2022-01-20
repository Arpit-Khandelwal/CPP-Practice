#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    // int ans[n];
    // int l = 0, h = n - 1;
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] == 0)
    //         ans[l++] = 0;
    //     if (a[i] == 2)
    //         ans[h--] = 2;
    // }
    // while (l <= h)
    //     ans[l++] = 1;

    // for (int i = 0; i < n; i++)
    //     cout << ans[i] << " ";
    /*
    int p0 = 0, p1 = 0, p2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            p0++;
        else if (a[i] == 1)
            p1++;
        else if (a[i] == 2)
            p2++;
    }
    int i = 0;
    for (; i < p0; i++)
        a[i] = 0;
    for (; i < p0 + p1; i++)
        a[i] = 1;
    for (; i < p0 + p1 + p2; i++)
        a[i] = 2;
*/

    /*count 0s,1s,2s and put in array
    int count0=0, count1=0, count2=0;

    for (int i = 0; i < n; i++)
    {
        switch (a[i])
        {
        case 0:
            count0++;
            break;
        case 1:
            count1++;
            break;
        default:
            count2++;
        }
    }
    int i = 0;
    while (count0-- > 0) a[i++] = 0;
    while (count1-- > 0) a[i++] = 1;
    while (count2-- > 0) a[i++] = 2;
    */
   
   //check and swap - O(N)  complexity
   //Method 1 of https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/ 
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        switch (a[mid])
        {
        case 0:
            swap(a[low++], a[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(a[mid], a[high--]);
        }
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
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
