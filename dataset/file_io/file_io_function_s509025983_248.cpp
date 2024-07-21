int main()
{

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    const int w = 52;
    const int h = 100;
    char field[h][w];
    int a, b;
    cin >> a >> b;
    a--, b--;

    rep(i, h / 2)
    {
        rep(j, w)
            field[i][j] = '.';
    }