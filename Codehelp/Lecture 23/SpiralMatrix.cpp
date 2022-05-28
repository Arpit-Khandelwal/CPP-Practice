#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int r = matrix.size();
    int c = matrix[0].size();

    int i = 0, count = 0;

    vector<int> ans;
    int startRow = 0, startCol = 0, endRow = r-1, endCol = c-1;
    while (count < r * c)
    {
        for (int i = startCol; i <= endCol && count<r*c;i++,count++) ans.push_back(matrix[startRow][i]);
        startRow++;
        
        for (int i = startRow;i<=endRow &&  count < r * c;i++,count++) ans.push_back(matrix[i][endCol]);
        endCol--;

        for (int i = endCol;i>=startCol && count < r * c;i--,count++) ans.push_back(matrix[endRow][i]);
        endRow--;

        for (int i = endRow;i>=startRow && count < r * c;i--,count++) ans.push_back(matrix[i][startCol]);
        startCol++;
    }

    return ans;
}

int main()
{
    vector<vector<int>> matrix;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            row.push_back(x);
        }
        matrix.push_back(row);
    }

    vector<int> ans = spiralOrder(matrix);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}


// 1 2 3 4
// 4 5 6 7
// 7 8 9 10