template <int N>
void changeBoard(vector<vector<int>> &board, int i, int j, int d)
{

    for (int k = 0; k < N; k++)
    {
        board[i][k] += d;
        board[k][j] += d;
    }