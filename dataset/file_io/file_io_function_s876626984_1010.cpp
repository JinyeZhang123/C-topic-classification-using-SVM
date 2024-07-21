int main()
{

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    int n;
    string s;
    cin >> n >> s;
    string ans = "None";
    s = s + s;

    string t1, t2, t3, t4;
    t1 = "SS", t2 = "WS", t3 = "SW", t4 = "WW";

    rep(i, 2 * n - 2)
    {
        add_animal(s[i + 1], t1);
        add_animal(s[i + 1], t2);
        add_animal(s[i + 1], t3);
        add_animal(s[i + 1], t4);
    }