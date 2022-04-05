#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
    int i, j;
    i = j = 0;
    vector<int> arr;
    while(i<m && j<n)
    {
        if(nums1[i]<nums2[j])
            {arr.push_back(nums1[i]); i++;}
        else 
        {
            arr.push_back(nums2[j]); j++;
        }
    }
    if(i==m)
        for (; j < n;j++)
            arr.push_back(nums2[j]);
    else if(j==n)
        for (; i < m;i++)
            arr.push_back(nums1[i]);
    nums1 = arr;
    //for (i = 0; i < m + n;i++)
    //  cout << nums1[i] << " ";


/*Runtime: 0 ms, faster than 100.00% of C++ online submissions for Merge Sorted Array.
Memory Usage: 9.2 MB, less than 27.89% of C++ online submissions for Merge Sorted Array.*/

//Another method
/*Runtime: 0 ms, faster than 100.00% of C++ online submissions for Merge Sorted Array.
Memory Usage: 9.1 MB, less than 72.86% of C++ online submissions for Merge Sorted Array.*/
int i=m-1, j=n-1, insertAtIndex=m+n-1;
        
        while(j>=0)
        {
            if(i>=0 && nums1[i]>nums2[j]) 
                nums1[insertAtIndex] = nums1[i--];
            else 
                nums1[insertAtIndex] = nums2[j--];
            insertAtIndex--;
        }
}


void solve()
{
    int m;
    cin>>m;
    int n;
    cin>>n;
    vector<int> arr1;
    for (int i = 0; i < m;i++)
    {
        int j;
        cin >> j;
        arr1.push_back(j);
    }    
    vector<int> arr2;
    for (int i = 0; i < n;i++)
    {
        int j;
        cin >> j;
        arr2.push_back(j);  
    }
    merge(arr1, m, arr2, n);
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
