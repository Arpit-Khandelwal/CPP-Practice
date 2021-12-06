#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n, m;
    cin>>n>>m;

    int arr1[n], arr2[m];

    for (int i = 0; i < n;i++)
        cin >> arr1[i];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    for (int i = 0, j = 0; i < n && j < m;)
    {

        /* arr1 - 2 4 6 8
           arr2 - 1 3 5
            arr1[i]>arr2[j] swap(arr1[n-i-1],arr2[j])
        
        */
    
       if(arr1[i]>arr2[j])
       {
           int arr2_temp = arr2[j];
           int arr1_temp = arr1[n - 1];
           for (int k = n - 1; k > i;k--)
               arr1[k] = arr1[k - 1];

           arr1[i] = arr2_temp;
           for (int k = j; k < m;k++)
               arr2[k] = arr2[k + 1];

           arr2[m - 1] = arr1_temp;

           
       }

       else{
           i++;
       }
    }
    for (int i = 0; i < n;i++)
        cout << arr1[i] << " ";
    cout << endl;
    sort(arr2, arr2 + m);
    for (int j = 0; j < m;j++)
        cout << arr2[j] << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
