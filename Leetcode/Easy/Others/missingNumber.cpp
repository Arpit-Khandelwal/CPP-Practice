#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


// int missingNumber(vector<int> &nums)
// {

//     int n = nums.size();
//     int sum = n * (n + 1) / 2;

//     for (int i = 0; i < n; i++)
//         sum -= nums[i];

//     return sum;
// }

int sum(vector<int> nums,int N)
{
    if(N==0) return 0;
    
    return nums[N-1]+sum(nums,N-1);
}
int missingNumber(vector<int> nums)
{
    // Your code goes here
    int N = nums.size();

    return ((N * (N + 1)) / 2) - sum(nums, N - 1);
}

void solve()
{
    int n;
    cin >> n;

    vector<int> nums;
    for (int i = 0; i < n;i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    cout << missingNumber(nums)<<endl;
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


