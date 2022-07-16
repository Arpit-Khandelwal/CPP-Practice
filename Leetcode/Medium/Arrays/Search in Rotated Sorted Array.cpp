#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int search(vector<int> &arr, int target)
{

    int l = 0, h = arr.size() - 1;
    int mid;
    while (l <= h)
    {
        mid = l + (h - l) / 2;
        if (arr[mid] == target)
            return mid;

        // if(target<arr[mid])
        // {
        //     if(target<arr[l]) l=mid+1;
        //     else h=mid-1;
        // }
        // else
        // {
        //     if(target>=arr[h]) h=mid-1;
        //     else l=mid+1;
        // }

        if (arr[l] <= arr[mid])
        {
            if (arr[l] <= target && target < arr[mid])
                h = mid - 1;
            else
                l = mid + 1;
        }
        else
        {
            if (arr[mid] < target && target <= arr[h])
                l = mid + 1;
            else
                h = mid - 1;
        }
    }

    return -1;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> nums;
    int x;
    for (int i = 0; i < n;i++) 
    {
        cin >> x;
        nums.push_back(x);
    }

    int target;
    cin >> target;

    cout << search(nums, target)<<endl;
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
