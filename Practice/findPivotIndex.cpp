#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int pivotIndex(vector<int>& nums) 
{
    int n = nums.size();
    /*using two vectors
    vector<int> Lprefix, Rprefix;
    Lprefix.push_back(nums[0]);
    for (int i = 1; i < n;i++){
        Lprefix.push_back(Lprefix[i - 1] + nums[i]);
        Rprefix.push_back(0);
    }
    Rprefix.push_back(nums[n - 1]);
    for (int i = n - 2; i >= 0; i--)
        Rprefix[i]=(Rprefix[i + 1] + nums[i]);
    for (int i = 0; i < n; i++)
        if (Lprefix[i] == Rprefix[i])
            return i;
    return -1;
    */

   //using only 1 vector
    int sum = 0;
    int lsum = 0;
    for(int i:nums)
        sum += i;
    for (int i = 0; i < n;i++)
    {
        if(lsum==sum-lsum-nums[i])
            return i;
        lsum += nums[i];
    }
    return -1;
}

void solve()
{
    int n, j;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n;i++)
    {
        cin >> j;
        a.push_back(j);
    }
    cout << pivotIndex(a);
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
