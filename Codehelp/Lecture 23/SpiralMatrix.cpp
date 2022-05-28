#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int r = matrix.size();
    int c = matrix[0].size();

    int k = (sqrt(r * c) - 1) / 2;
    int i = 0, j = 0;

    vector<int> ans;
    for (int count = 0; count <= k; count++)
    {
        while (j < c - count) ans.push_back(matrix[i][j++]);
        j--;i++;

        while (i < r - count) ans.push_back(matrix[i++][j]);
        i--;j--;

        while (j >= count) ans.push_back(matrix[i][j--]);
        j++;i--;

        while (i > count) ans.push_back(matrix[i--][j]);
        i++;j++;
    }

    return ans;
}