int main()
{

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    // int n;
    // string s, t;
    // cin >> n >> s;
    // VL dp(n + 1, 0ll);
    // vector<set<int>> callspell(n);
    // dp[0] = 1;
    // rep(i, n)
    // {
    //     cin >> t;
    // }