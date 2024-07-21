int main()
{
   // ifstream cin("a.inp");
    cin >> s >> t;
    ch['A']=1;ch['B']=2;
    s='#'+s;t='#'+t;
    for (int i=1; i<s.size(); ++i)
        ss[i]=ss[i-1]+ch[s[i]];
    for (int i=1; i<t.size(); ++i)
        tt[i]=tt[i-1]+ch[t[i]];
    cin >> n;
    for (int i=1; i<=n; ++i){
            int a,b,c,d;
        cin >> a >> b >> c >> d;
        int t=abs((ss[b]-ss[a-1])-(tt[d]-tt[c-1]));
        if (t%3==0) cout << "YES\n";
        else cout << "NO\n";
    }