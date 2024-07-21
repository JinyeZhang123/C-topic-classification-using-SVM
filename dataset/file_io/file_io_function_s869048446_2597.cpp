signed main()
{
    //  以降 cin の入力元が 'input.txt' になる
    // std::ifstream in("in/sub1_04.txt");
    // std::cin.rdbuf(in.rdbuf());
    int N, K;
    cin >> N >> K;
    REP(i, N)
    {
        int tmp;
        cin >> tmp;
        if (tmp < 0)
        {
            vminus.push_back(tmp);
        }