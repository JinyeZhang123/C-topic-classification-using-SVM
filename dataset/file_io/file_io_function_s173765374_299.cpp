signed main()
{
    //  以降 cin の入力元が 'input.txt' になる
    //std::ifstream in("input.txt");
    //std::cin.rdbuf(in.rdbuf());
    int N, P;
    cin >> N >> P;
    string S;
    cin >> S;

    REP(i, P)
    {
        counter[i] = 0;
    }