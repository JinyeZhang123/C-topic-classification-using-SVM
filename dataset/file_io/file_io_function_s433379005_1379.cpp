int main()
{

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    int n, k, a, b;
    cin >> n >> k;
    ll ans = 0;
    vector<int> num, value, candidate;
    rep(i, n)
    {
        cin >> a >> b;
        num.push_back(a);
        value.push_back(b);
    }