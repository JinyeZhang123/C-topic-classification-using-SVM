void solve()
{

    // remove the bottom 3 lines when you submit this code.
    std::ifstream in("sample.txt");
    std::cin.rdbuf(in.rdbuf());

    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m, k;
    cin >> n >> m >> k;

    bool isAns = false;
    for (int in = 0; in <= n; in++)
    {
        for (int jm = 0; jm <= m; jm++)
        {
            if (in * m + jm * n - 2 * (in * jm) == k)
                isAns = true;
        }