#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n, num;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n;i++)
    {
        cin >> num;
        arr.push_back(num);
    }
     
     //O(n^2)
    for (int i = 0; i < n-1;i++)
    {
        for (int j = i+1; j < n;j++)
        {
            if(arr[i]==arr[j]) {
                cout << arr[i]<<endl;
                break;
            }
        }
    }
    cout<<endl;
    //two pointer - need to implement
    /*
    int l = 0, r = n - 1;
    while(arr[l]!=arr[r])
        l++;
    */

   //xor approach
    int ans = 0;
    for (int i = 0; i < n;i++)
        ans  = ans ^ i ^ arr[i];
    cout << "Xor : " << ans<<endl;

    //o(n) god level
    while (arr[0] != arr[arr[0]])
        swap(arr[0], arr[arr[0]]);
    cout << arr[0];
    //explanation
    /*
    arrange items in such a way that if array is [3,1,4,2,3], then at nume[0], we have 3, so we swap 3 with nums[3], effectively putting 3 at 3rd index in the array, so any N would be placed at index N, and if we encounter any N in the array, then we can possibly find it at arr[N]
    */
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
