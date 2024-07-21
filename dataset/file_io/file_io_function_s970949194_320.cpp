signed main()
{
    //  以降 cin の入力元が 'input.txt' になる
    //std::ifstream in("input.txt");
    //std::cin.rdbuf(in.rdbuf());
    int N;
    cin >> N;

    vector<pair<int, int>> q;
    REP(i, N)
    {
        int tmp;
        cin >> tmp;
        q.emplace_back(make_pair(tmp, i));
    }