int main()
{

    // cin.tie(0);
    // ios::sync_with_stdio(false);

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    constexpr int m = 3000000;
    int r1, r2, c1, c2, r, c, a1, b1;
    ll ans{0}