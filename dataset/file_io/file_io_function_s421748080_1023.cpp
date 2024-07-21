int main()
{
    //ofstream out("output.txt");
    //ifstream in("input.txt");
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    LL a[n];
    loop(i,0,n) cin>>a[i];

    LL s = a[0] + a[1], x = 0;
    loop(i,2,n) x = x ^ a[i];
    LL d = s - x, ans;
    if(d < 0 || d & 1) ans = -1;
    else
    {
        d /= 2;
        int f = 1;
        loop(i,0,MX)
        {
            if((d & ((LL)1 << i)) && (x & ((LL)1 << i))) {f = 0; break;}