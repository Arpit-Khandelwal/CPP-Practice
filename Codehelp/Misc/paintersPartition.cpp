#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isPossible(vector<int> &boards, int k, int mid, int n)
{
    int painters = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + boards[i] <= mid)
        {
            sum += boards[i];
        }
        else
        {
            painters++;
            if (painters > k || boards[i] > mid)
            {
                return false;
            }
            sum = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int l, h, mid;
    int n = boards.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += boards[i];
    }
    l = 0;
    h = sum;
    mid = l + (h - l) / 2;
    int ans = -1;
    while (l <= h)
    {
        if (isPossible(boards, k, mid, n))
        {
            ans = mid;
            h = mid - 1;
        }
        else
            l = mid + 1;

        mid = l + (h - l) / 2;
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> boards;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        boards.push_back(x);
    }

    cout << findLargestMinDistance(boards, k) << endl;
}