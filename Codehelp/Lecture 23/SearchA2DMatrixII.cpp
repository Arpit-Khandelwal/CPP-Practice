#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    // Runtime: 48 ms, faster than 99.80%
    // Memory Usage: 14.9 MB, less than 23.18%

    int i = 0, j = matrix[0].size(), k;

    while (i < matrix.size() && j && (k = matrix[i][j - 1]) != target)
    {
        if (k > target)
            j--;
        else if (target == k)
            return true;
        else
            i++;
    }

    matrix.clear();

    return k == target;

    // my implementation - Runtime: 64 ms, faster than 99.73% Memory Usage: 14.8 MB, less than 88.44%
    int i = 0, j = matrix[0].size() - 1, k;

    while (i < matrix.size() && j >= 0)
    {
        k = matrix[i][j];
        if (k == target)
            return true;

        if (target < k)
            j--;
        else
            i++;
    }

    matrix.clear();

    return false;

    // method 2
    /*
    int r = matrix.size();
    int c = matrix[0].size();
    for (int i = 0; i < r; i++)
    {
        if (target >= matrix[i][0] && target <= matrix[i][c - 1])
            if (binary_search(matrix[i].begin(), matrix[i].end(), target))
                return true;
        ;
    }

    return false;
    */
}