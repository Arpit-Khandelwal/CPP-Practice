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
        //logic 1
    int totalSum=INT_MIN, sum=0;
    for (int i = 0;i<n;i++)
    {
        sum += arr[i];
        if(totalSum<sum)
            totalSum = sum;
        
        if(sum<0)
            sum = 0;
        
    }
    cout << totalSum;

    //logic 2: OP logic
    int sum1 = INT_MIN, sum2 = 0;
    for (int i = 0;i<n;i++)
    {
        sum2 = max(arr[i], sum2 + arr[i]);
        sum1 = max(sum1, sum2);
    }
    cout << " " << sum1;
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
