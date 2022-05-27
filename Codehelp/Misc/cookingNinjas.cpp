//https://www.codingninjas.com/codestudio/problems/cooking-ninjas_1164174
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isPossible(vector<int> &rank, int m, int mid)
{
    int dishes = 0, timeTaken = 0;
    for (int i = 0; i < rank.size(); i++)
    {
        dishes += (sqrt(1 + 8 * mid / rank[i]) - 1) / 2;
        if (dishes >= m)
            return true;
    }
    return false;
}

int minCookTime(vector<int> &rank, int m)
{
    sort(rank.begin(), rank.end());
    int n = rank.size();
    int l = 0, h = rank[n - 1] * m * (m + 1) / 2;
    int ans = -1;
    int mid = l + (h - l) / 2;
    while (l <= h)
    {
        if (isPossible(rank, m, mid))
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
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> rank;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            rank.push_back(x);
        }

        cout << minCookTime(rank, m) << endl;
    }
}