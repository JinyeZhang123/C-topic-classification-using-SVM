void solve()
{

    // remove the bottom 3 lines when you submit this code.
    std::ifstream in("./sample.txt");
    std::cin.rdbuf(in.rdbuf());

    cin.tie(0);
    ios::sync_with_stdio(false);

    int H, W, N;
    cin >> H >> W >> N;
    int a[N];
    rep(i, N) cin >> a[i];

    int masu[H][W];

    vector<int> color;
    rep(i, N)
    {
        rep(j, a[i])
        {
            color.push_back(i + 1);
        }