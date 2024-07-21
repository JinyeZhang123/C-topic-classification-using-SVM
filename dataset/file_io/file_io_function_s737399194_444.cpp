void solve()
{

    // remove the bottom 3 lines when you submit this code.
    std::ifstream in("sample.txt");
    std::cin.rdbuf(in.rdbuf());

    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];

    int cnt2, cnt4;
    cnt2 = cnt4 = 0;
    rep(i, n)
    {
        if (a[i] % 4 == 0)
        {
            cnt4++;
        }