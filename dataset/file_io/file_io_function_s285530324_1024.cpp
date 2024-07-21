int main()
{
    //ofstream out("output.txt");
    //ifstream in("input.txt");
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    LL n,k,x,y;
    cin>>n>>k>>x>>y;
    LL ans = (min(n,k) * x) + (max((LL)0,n - k) *y);

    cout<<ans<<'\n';

    /*
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        loop(i,0,n) cin>>a[i];
    }