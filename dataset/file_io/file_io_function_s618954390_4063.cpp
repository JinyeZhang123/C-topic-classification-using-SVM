int main()
{

    cin.tie(0);
    ios::sync_with_stdio(false);

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    const int m = 40;
    int n, q, l, a, b, p, ans;
    cin >> n;
    VL x_list(n);
    VVI doubling(n, VI(m, n));
    rep(i, n) cin >> x_list[i];
    cin >> l;
    rep(i, n - 1)
    {
        p = lower_bound(allpt_c(x_list), x_list[i] + l) - x_list.cbegin();
        doubling[i][0] = x_list[p] == x_list[i] + l ? p : p - 1;
    }