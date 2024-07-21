int main()
{

    cin.tie(0);
    ios::sync_with_stdio(false);

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    int n, m, a, b, s, t;
    cin >> n >> m;
    VVI connect(3 * n);
    rep(i, m)
    {
        cin >> a >> b;
        a--, b--;
        connect[a].emplace_back(b + n);
        connect[a + n].emplace_back(b + 2 * n);
        connect[a + 2 * n].emplace_back(b);
    }