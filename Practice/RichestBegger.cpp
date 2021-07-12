#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0;i<n;i++)  //initialize
        arr[i] = 0;            //memset(arr,n,0)
    int k;
    cin >> k;
    int max = -32768;
    /*bruteforce
    int l[k], r[k];
    for (int i = 0; i < k; i++)
        cin >> l[i] >> r[i];    //input over
    
    for (int i = 0; i < k; i++)
    {
        for (; l[i] <= r[i];l[i]++)     
            arr[l[i] - 1]++;
    }
    for (int i = 0; i < n; i++){ 
        if(arr[i]>max)
            max = arr[i];
    }
    */
   //prefix-sum
    int ans[n];
    for (int i = 0; i < n; i++)
        ans[i] = 0;
    while (k-- > 0)
    {
        int l, r;
        cin >> l >> r;
        ans[l - 1]++;
        if (r < n)
            ans[r]--;
    }
    for (int i = 1; i < n; i++)
    {
        ans[i] += ans[i - 1]; //calculate prefix-sum
        if (ans[i] > max)
            max = ans[i];
    }
    cout << max << endl;
    //print array
    for (int i = 0; i < n; i++)
    if(max==ans[i])
        cout << (i+1) << " ";
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
