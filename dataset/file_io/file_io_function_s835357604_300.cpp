signed main()
{
    //  以降 cin の入力元が 'input.txt' になる
    //std::ifstream in("input.txt");
    //std::cin.rdbuf(in.rdbuf());
    int n, k, c;
    cin >> n >> k >> c;
    vi v;
    rep(i, n)
    {
        char tmp;
        cin >> tmp;
        if (tmp == 'o')
            v.emplace_back(i);
    }