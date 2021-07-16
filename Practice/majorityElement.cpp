#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int majorityElement(vector<int>& nums) 
{
    sort(nums.begin(), nums.end());
    int n=nums.size();   
    /* finding max freq of element 
    int p,q,max_freq,maj_element;
    p = q = max_freq = maj_element = 0;
    for(;q<n;q++)
    {
        if(nums[p]!=nums[q])
        {
            if(max_freq<q-p) {max_freq=q-p;maj_element=nums[p];}
            p = q;
        }
    }
    if(max_freq<q-p) {max_freq=q-p;maj_element=nums[p];}
    return maj_element;
    */
   
   /*comparing freq with n/2
    int i, freq = 0;
    for (i = 0; i < n-1;i++)
    {
        if(nums[i]==nums[i+1])
        {
            freq++;
            if(freq==n/2)
            break;
        }
        else freq = 0;
    }
    return nums[i];
    */

   //straight up logic- if element occours for atleast n/2 times, then after  sorting the arrat, we'll find the element at ceil(n/2) index
    return nums[n / 2];
}

void solve()
{
    vector<int> a;
    int n, j;
    cin >> n;
    while(n--) {
        cin >> j;
        a.push_back(j);
    }
    cout << majorityElement(a);
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
