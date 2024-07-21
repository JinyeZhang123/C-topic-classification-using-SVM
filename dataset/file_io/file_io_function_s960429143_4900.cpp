int main()
{

    cin.tie(0);
    ios::sync_with_stdio(false);

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    int h, w, k, ans;
    cin >> h >> w >> k;
    ans = h * w;
    string s;
    vector<VB> is_whitechoco(h, VB(w));
    rep(i, h)
    {
        cin >> s;
        rep(j, w)
        {
            is_whitechoco[i][j] = (s[j] == '1');
        }