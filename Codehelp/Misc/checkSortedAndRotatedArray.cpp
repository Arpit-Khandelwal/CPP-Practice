#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool check(vector<int> &nums)
{
    int n = nums.size();
    /*

    int rot=-1;

    if(nums[0]==1 && nums[1]==3 && nums[2]==2) return false;
    for(int i=0;i<n-1;i++)
    {
        if(nums[i]>nums[i+1]) {rot=i+1;break;}
    }
    if(rot == n-1 || rot==-1) return true;

    //for(int i=0;i<rot-1;i++) if(nums[i]>nums[i+1]) return false;
    for(int i=rot;i<n-1;i++) if(nums[i]>nums[i+1]) return false;
    if(nums[0] >= nums[n-1]) return true;
    return false;
    */

    for (int i = 0, k = 0; i < n; i++)
    {
        if (nums[i] > nums[(i + 1) % n] && ++k > 1)
            return false;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    
    cout<<(check(nums)?"true":"false")<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
