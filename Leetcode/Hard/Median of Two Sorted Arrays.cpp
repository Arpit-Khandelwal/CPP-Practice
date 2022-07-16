#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

double binaryMedian(vector<int> nums1, vector<int> nums2)
{
    int m = nums1.size(), n = nums2.size();
    bool odd = (m + n) % 2;

    int l1 = 0, l2 = 0, h1 = m - 1, h2 = n - 1;
    int mid1, mid2;
    while(nums1.size()>2 && nums2.size()>2)
    {
        mid1 = l1 + (h1 - l1) / 2;
        mid2 = l2 + (h2 - l2) / 2;

        if(nums1[mid1]<nums2[mid2])
        {
            //add to to-do
        }
    }
}

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    if (nums1.size() < nums2.size())
        return binaryMedian(nums1, nums2);
    else
        return binaryMedian(nums2, nums1);
}

void solve()
{
    int m, n;
    cin >> m >> n;

    vector<int> nums1, nums2;

    int x;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        nums1.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums2.push_back(x);
    }

    cout << findMedianSortedArrays(nums1, nums2);
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
