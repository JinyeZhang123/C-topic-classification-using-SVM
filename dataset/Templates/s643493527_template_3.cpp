template <int N>
void setQueen(vector<int> &queen, vector<vector<int>> &board, vector<int> vr, int i)
{
    // cout << i << endl;
    if (i == N)
    {
        printQueen<8>(queen);
        // cout << "---" << endl;
        return;
    }