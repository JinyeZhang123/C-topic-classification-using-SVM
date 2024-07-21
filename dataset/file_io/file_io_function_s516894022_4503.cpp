int main()
{

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    int n, q, k, c, s, t;
    ll x, y;
    cin >> n >> q;
    RangeAddorUpdateQuery segtree(n, 0);

    for (int i = 0; i < q; i++)
    {
        cin >> c;
        if (c == 0)
        {
            cin >> s >> t >> x;
            segtree.rangeadd(s - 1, t, x);
        }