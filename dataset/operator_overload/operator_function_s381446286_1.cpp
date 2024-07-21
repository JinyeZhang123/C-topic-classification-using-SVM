void operator delete(void *) {}

int dp[N][N][N];

main ()
{
    ios;
    string s;
    int k;
    cin>>s>>k;
    k=min(k,(int)s.size());
    int kol=0;
    vector< int >a;
    for (int i=0;i<s.size();++i){
        if (s[i]=='1')++kol;
        else {
            a.pb(kol);
            kol=0;
        }