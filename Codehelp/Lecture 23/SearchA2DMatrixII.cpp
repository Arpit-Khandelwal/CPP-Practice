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
}