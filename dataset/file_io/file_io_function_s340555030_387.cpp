void solve()
{

    // remove the bottom 3 lines when you submit this code.
    std::ifstream in("sample.txt");
    std::cin.rdbuf(in.rdbuf());

    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int BA, XX, XA, BX, cnt;
    BA = XX = XA = BX = cnt = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (s[0] == 'B' && s[s.size() - 1] == 'A')
            BA++;
        else if (s[0] != 'B' && s[s.size() - 1] != 'A')
            XX++;
        else if (s[0] == 'B')
            BX++;
        else
            XA++;

        for (int j = 0; j < s.size() - 1; j++)
        {
            if (s[j] == 'A' && s[j + 1] == 'B')
                cnt++;
        }