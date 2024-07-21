template <int N>
void printQueen(vector<int> queen)
{
    for (int i = 0; i < N; i++)
    {
        if (queen[i] == -1)
        {
            for (int j = 0; j < N; j++)
            {
                cout << ".";
            }