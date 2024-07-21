int main()
{
    //ofstream out("output.txt");
    //ifstream in("input.txt");
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,m;
    cin>>n>>m;
    int u,v;

    VI g[n+1];
    loop(i,0,m)
    {
        cin>>u>>v;
        g[u].PB(v);
    }