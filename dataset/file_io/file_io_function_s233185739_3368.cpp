int main()
{

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    int n, q, k, c, s, t, x;
    cin >> n >> q;
    RangeAddorUpdateQuery segtree(n);

    for (int i = 0; i < q; i++)
    {
        cin >> c;
        if (c == 0)
        {
            cin >> s >> t >> x;
            segtree.rangeupdate(s, t + 1, x);
        }