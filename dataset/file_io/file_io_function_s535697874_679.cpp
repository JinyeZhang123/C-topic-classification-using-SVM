signed main()
{
#ifdef LOCAL
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
#endif

    cin >> N >> Q;
    n = N + 1;
    REP(i,Q) {
        cin >> com >> x >> y;
        if (com == 0) {
            add(x, y);
        }