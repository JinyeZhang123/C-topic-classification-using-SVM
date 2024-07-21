int main()
{

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    int n, m, x, y, ans = 0;
    const int xmax = 100001;
    cin >> n >> m;
    VI histgram(xmax, 0), modhist(m, 0);
    rep(i, n)
    {
        cin >> x;
        histgram[x]++;
    }