int main()
{

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    int n, p;
    ll ans;
    cin >> n;
    ll c[n], d[n];
    ll e[n];
    vector<int> v;
    fill(d, d + n, 0);

    rep(i, n)
    {
        cin >> c[i];
    }