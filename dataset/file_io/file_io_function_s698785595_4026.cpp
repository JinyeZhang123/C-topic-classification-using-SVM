int main()
{

    // cin.tie(0);
    // ios::sync_with_stdio(false);

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    constexpr int m = 50;
    int n;
    ll k;
    cin >> n >> k;
    VL canndidate = make_num(k, m), a_list(n), ans_list;
    VVL bits(m, VL(2, 0));
    rep(i, n) cin >> a_list[i];

    rep(i, m)
    {
        rep(j, n)
        {
            a_list[j] & (1ll << i) ? bits[i][0]++ : bits[i][1]++;
        }