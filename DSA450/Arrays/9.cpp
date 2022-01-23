#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int getMinDiff(int arr[], int n, int k)
{
    // code here
    int tempArr[n];
    for (int i = 0; i < n;i++) 
        if(tempArr[i]<=k)
            tempArr[i] += k;
    
    

    for (int i = 0; i < n;i++)
    {
        if(arr[i]<k && )
    }
}

void solve()
{
    int k, n;
    cin >> k >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Analysis: " << endl;
    // for (int i = 0; i < n; i++)  cout <<arr[i]<<"\t"<< arr[i] + 5 << "\t" << arr[i] - 5<<"\t"<<((arr[i]>k)?arr[i]-k:k+arr[i]) << endl;
    cout << endl;

    cout << getMinDiff(arr, n, k) << endl;
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
