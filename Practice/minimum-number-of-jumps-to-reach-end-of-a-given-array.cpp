#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int solve()
{
    int a[] = {0};
    int n = sizeof(a) / sizeof(int);

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
