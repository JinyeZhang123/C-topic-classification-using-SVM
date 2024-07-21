void solve()
{
    // remove the bottom 3 lines when you submit this code.
    std::ifstream in("./sample.txt");
    std::cin.rdbuf(in.rdbuf());

    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    int ans = 0;

    ans = ((n == 1) ? 1 : n - 2) * ((m == 1) ? 1 : m - 2);

    cout << ans << endl;
}