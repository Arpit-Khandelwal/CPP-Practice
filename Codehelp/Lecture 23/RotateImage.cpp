#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    for (int i = 0; i < n / 2; i++)
    {
        for (int count = 0; count < n - 2 * i - 1; count++)
        {
            swap(matrix[i][i + count], matrix[n - i - 1 - count][i]);
            swap(matrix[n - i - 1 - count][i], matrix[n - i - 1][n - i - 1 - count]);
            swap(matrix[n - i - 1][n - i - 1 - count], matrix[i + count][n - i - 1]);
        }
    }
}