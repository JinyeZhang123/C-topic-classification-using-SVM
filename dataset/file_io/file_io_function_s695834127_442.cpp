void solve()
{

    // remove the bottom 3 lines when you submit this code.
    std::ifstream in("sample.txt");
    std::cin.rdbuf(in.rdbuf());

    cin.tie(0);
    ios::sync_with_stdio(false);

    int x;
    cin >> x;
    int ans = 2 * (x / 11);
    int amari = x % 11;

    if (amari == 0)
    {
        //do nothing
    }