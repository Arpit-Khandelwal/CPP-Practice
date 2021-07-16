#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void reverseInGroups(vector<long long>& arr, int n, int k)
{
    // code here

    int i, j, count;
    for( i=0;i<n;i+=k)
    {
        vector<long long> a;
        int s = 0;
        for( j=i;j<k+i &&j<n;j++) 
        {
            a.push_back(arr[j]);
        }
        //reverse a
        s = a.size();
        int l = 0, h = s - 1;
        while (l <= h)
        {
            long long temp = a[l];
            a[l] = a[h];
            a[h] = temp;
            l++;h--;
        }
        count = 0;
        for( j=i;j<k+i &&j<n;j++) arr[j]=a[count++];
        a.clear();
    }
}

void solve()
{
    int n, k;
    vector<long long> arr;
    cin >> n >> k;
    for (int i = 0; i < n;i++) {
        int j;
        cin >> j;
        arr.push_back(j);
    }
    reverseInGroups(arr, n, k);

    for (int i = 0; i < n;i++)
        cout << arr[i] << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
