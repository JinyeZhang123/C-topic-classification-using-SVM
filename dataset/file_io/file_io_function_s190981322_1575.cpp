int main()
{
    //ifstream inf("");
    //ofstream outf("");
    cout << setprecision(10);
    ios::sync_with_stdio(0); cin.tie(0);
    memset(dp, -1, sizeof dp);
    memset(ans, -1, sizeof ans);
    
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> P[i].fi >> P[i].se;
    sort(P+1, P+1+n, cmp);
    
    //for (int i = 1; i <= n; i++) cout << P[i].fi << ' ' << P[i].se << endl;
    
    int ret = 0;
    for (int i = 1; i <= n; i++) ret = max(ret, g(n,i));

    cout << ret << '\n';
    
    return 0;
    
}