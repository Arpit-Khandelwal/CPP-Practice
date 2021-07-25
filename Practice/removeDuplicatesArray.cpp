#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

 int removeDuplicates(vector<int>& nums) 
{
    int pos=0, n = nums.size();
    int count = 0;
    for (int i = 1;i<n;i++)
    {
        if(nums[pos]!=nums[i]) 
        {
            int temp = nums[pos+1];
            nums[pos+1] = nums[i];
            nums[i] = temp;
            pos++;
        }
        else
            count++;
    }
    for (int i = n - count; i < n; i++)
        nums[i] = '_';
    return n - count;
}

void solve()
{
    int n;
    cin>>n;
    int j;
    vector<int> arr;
    for (int i = 0; i < n;i++)
    {
        cin >> j;
        arr.push_back(j);
    }
    int k = removeDuplicates(arr);
    for (int i = 0; i < k;i++)
        cout << arr[i] << " ";
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
