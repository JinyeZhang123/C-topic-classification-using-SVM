int main()
{
    //ofstream out("output.txt");
    //ifstream in("input.txt");
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    LL n, u, v;
    cin>>n;
    VL g[n+1];
    loop(i,1,n)
    {
        cin>>u>>v;
        g[u].PB(v); g[v].PB(u);
    }