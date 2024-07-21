signed main()
{
    //  以降 cin の入力元が 'input.txt' になる
    //std::ifstream in("input.txt");
    //std::cin.rdbuf(in.rdbuf());
    int N;
    cin >> N;
    vector<int> v;
    map<int, int> mp;
    REP(i, N)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(a);
        mp[a] = b;
    }