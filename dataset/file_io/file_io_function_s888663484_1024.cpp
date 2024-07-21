int main()
{
    //ofstream out("output.txt");
    //ifstream in("input.txt");
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,m;
    cin>>n>>m;

    int a[n][m];
    loop(i,0,n) loop(j,0,m) cin>>a[i][j];

    VPII ans;
    loop(i,0,n-1)
    {
        loop(j,0,m)
        {
            if(a[i][j] & 1) {ans.PB({i+1,j+1}