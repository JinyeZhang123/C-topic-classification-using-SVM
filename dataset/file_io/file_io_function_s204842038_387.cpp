void solve()
{

    // remove the bottom 3 lines when you submit this code.
    std::ifstream in("sample.txt");
    std::cin.rdbuf(in.rdbuf());

    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    rep(i, n) cin >> A[i];

    map<int, int> mp;
    rep(i, n) mp[A[i]]++;

    int tmp1 = 0;
    for (auto a : mp)
    {
        if (a.second >= 2)
        {
            tmp1 = max(tmp1, a.first);
        }