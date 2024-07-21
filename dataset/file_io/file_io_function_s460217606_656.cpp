int32_t main()
{
    //ifstream inf("");
    //ofstream outf("");
    //cout << setprecision(10);
    ios::sync_with_stdio(0); cin.tie(0);
    
    int k; cin >> k;
    
    ll x = 1;
    ll add = 1;
    while (k--)
    {
        cout << x << endl;
        if ((x+10*add)*S(x+add) < (x+add)*S(x+10*add)) add *= 10;
        x += add;
    }