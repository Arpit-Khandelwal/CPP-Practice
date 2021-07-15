#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
/*bruteforce
 vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int sum;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target) return {i,j};
            }
        }
        return {};
    }
*/
 vector<int> twoSum(vector<int>& nums, int target) 
 {
        vector<pair<int,int>> num;
        for(int i=0;i<nums.size();i++) num.push_back({nums[i],i});
        sort(num.begin(), num.end());
        int l = 0, h = nums.size() - 1;
        while(l<=h)
        {
            if(target<num[l].first+num[h].first)
                h--;
            else if(target>num[l].first+num[h].first)
                l++;
            else return {num[l].second, num[h].second};
        }
        return {};
 }
void solve()
{
    int n, target;
    cin >> n >> target;
    int j;
    vector<int> a;
    for (int i = 0; i < n; i++) 
    {
        cin >> j;
        a.push_back(j);
    }
    vector<int> ans= twoSum(a, target);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
   // cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
