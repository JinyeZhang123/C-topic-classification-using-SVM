int main()
{

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    int n, p;
    cin >> n;
    vector<int> x(n), ans(n * n, -1);
    vector<int> prepare, postpare, fillvec, appear(n, 0), check(n, 0);
    vector<PII> y(n);
    rep(i, n)
    {
        cin >> x[i];
        y[i] = make_pair(x[i], i + 1);
        ans[x[i] - 1] = i + 1;
    }