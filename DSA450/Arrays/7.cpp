#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];

    int temp = arr[n - 1]; //store last element
    for (int i = n - 2; i >= 0;i--)     //push all elements forward
        arr[i + 1] = arr[i];
    arr[0] = temp; //put last element to first

    for (int i = 0; i < n;i++)
        cout<< arr[i]<<" ";
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
