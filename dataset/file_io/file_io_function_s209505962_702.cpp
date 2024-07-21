int main()
{

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    int n, m, s, t, c, a, b, f, ans;
    cin >> n >> m;

    vector<pair<int, int>> edge[n];
    vector<int> used;

    f = 1, ans = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> s >> t >> c;
        edge[s].push_back(make_pair(t, c));
        edge[t].push_back(make_pair(s, 0));
    }