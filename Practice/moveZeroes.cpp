#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void moveZeroes(vector<int>& nums) 
{
     /*   vector<int> arr;
    int p = 0, i, count = 0;
    int n = nums.size();
    for (i = 0; i < n;i++)
    {
        if(nums[i]!=0)
        {
            arr.push_back(nums[i]);
        }
        else
            count++;
    }
    while(count--)
        arr.push_back(0);
    nums = arr;*/
    /*
    int i, p = 0;
   for (i = 0; i < nums.size(); i++)
       if (nums[i] != 0)
           nums[p++] = nums[i];
   for (i = p; i < nums.size(); i++)
       nums[i] = 0;
    
    }
    */
        for (int p = 0, q = 0; q < nums.size(); q++) {
        if (nums[q] != 0) {
            int temp=nums[p];
            nums[p]=nums[q];
            nums[q]=temp;
            p++;
        }
    }
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
