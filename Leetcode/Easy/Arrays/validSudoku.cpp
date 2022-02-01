bool isValidSudoku(vector<vector<char>> &board)
{

    vector<unordered_set<int>> rows(9);
    vector<unordered_set<int>> columns(9);
    vector<unordered_set<int>> boxes(9);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] == '.')
                continue;

            int num = board[i][j] - '0';

            int boxNum = 3 * (i / 3) + j / 3;
            if (rows[i].count(num) || columns[j].count(num) || boxes[boxNum].count(num))
                return false;

            rows[i].insert(num);
            columns[j].insert(num);
            boxes[boxNum].insert(num);
        }
    }
    return true;
}