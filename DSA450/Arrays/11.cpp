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
    for (int i = 0; i < n;i++)
    {
        for (int j = i; j < n;j++)
        {
            if(arr[i]==arr[j]) {
                cout << arr[i];
                break;
            }
        }
    }

    //two pointer
    int l = 0, r = n - 1;
    while(arr[l]!=arr[r])
        l++;
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
