#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin>>n;
    int arr1[n];
    for (int i = 0; i < n;i++)
        cin >> arr1[i];

    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m;i++)
        cin >> arr2[i];

    int union1[m + n];
    int intersection[min(m, n)];
    int count = 0;
    cout << "\nUnion: \n";
    for (int i = 0, j = 0; i < n || j < m;)
    {
        if(arr1[i]<arr2[j]) 
        {
            cout << arr1[i] << " ";
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            cout << arr2[j] << " ";
            j++;
        }
        else if(arr1[i]==arr2[j])
        {
            intersection[count++] = arr1[i];
            i++;
            j++;
        }
    }
    cout << "\nIntersection:\n";
    for (int i = 0; i < count;i++)
        cout << intersection[i] << " ";
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
