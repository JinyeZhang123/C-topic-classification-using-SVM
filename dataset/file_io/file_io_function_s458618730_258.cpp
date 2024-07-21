signed main()
{
    //  以降 cin の入力元が 'input.txt' になる
    //std::ifstream in("input.txt");
    //std::cin.rdbuf(in.rdbuf());
    int N;
    string S;
    cin >> N >> S;

    map<string, int> Left, Right;

    for (int bit = 0; bit < (1 << N); ++bit)
    {
        string B, R;
        for (int i = 0; i < N; i++)
        {
            if (bit & (1 << i))
            {
                B.push_back(S[i]);
            }