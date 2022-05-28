#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int r = matrix.size();
    int c = matrix[0].size();

    int i = 0, count = 0;

    vector<int> ans;
    int startRow = 0, startCol = 0, endRow = r-1, endCol = c-1;
    while (count <= r * c)
    {
        for (int i = startCol; i <= endCol && count<=r*c;i++,count++) ans.push_back(matrix[startRow][i]);
        startRow++;
        
        for (int i = startRow;i<=endRow &&  count <= r * c;i++,count++) ans.push_back(matrix[i][endCol]);
        endCol--;

        for (int i = endCol;i>=startCol && count <= r * c;i--,count++) ans.push_back(matrix[endRow][i]);
        endRow--;

        for (int i = endRow;i>=startRow && count <= r * c;i--,count++) ans.push_back(matrix[i][startCol]);
        startCol++;
    }

    return ans;
}