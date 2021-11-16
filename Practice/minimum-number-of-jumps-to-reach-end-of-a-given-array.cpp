#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int solve()
{
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9 };
    int n = sizeof(arr) / sizeof(int);

    /*
    if (n <= 1)
        return 0;
 
    if (a[0] == 0)
        return -1;

    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];
    vector<int> arr(a, a + n);
    int maxPos = 0, count = 0;
    for (int i = 0; arr[i]+i < n-1;)
    {
        int max = max_element(arr.begin(), arr.begin() + arr[i]+1)-arr.begin();
        i = distance(arr.begin(),max + arr.begin());
        count++;
    }
    return ++count;
    */
   
    int moves = arr[0], jumps = 1;
    int maxBound =arr[0];
    for (int i = 1;i<n;i++) 
    {
        if(i==n-1)
            return jumps;

        maxBound = max(maxBound, i + arr[i]);

        moves--;

        if(moves==0)
        {
            jumps++;

            if(i>=maxBound)
                return -1;
            moves = maxBound - i;
        }
    }
    return -1;
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
        cout<<solve()<<" ";
    }
    return 0;
}
