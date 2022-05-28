#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> v, int target)
{
    int l = 0, h = v.size() - 1;

    int mid;
    while (l <= h)
    {
        mid = l + (h - l) / 2;
        if (target == v[mid])
            return true;

        else if (target > v[mid])
            l++;
        else
            h--;
    }

    return false;
}

bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    int r = matrix.size();
    int c = matrix[0].size();

    if (target < matrix[0][0] || target > matrix[r - 1][c - 1])
        return false;

    for (vector<int> v : matrix)
    {
        if (target < v[0])
            return false;
        if (target > v[c - 1])
            continue;

        if (binarySearch(v, target))
            return true;
    }

    return false;
}