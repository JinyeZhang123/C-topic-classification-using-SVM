int main()
{
    //ofstream out("output.txt");
    //ifstream in("input.txt");
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int k;
    string s;
    cin>>k>>s;
    int n = s.length();

    LL num[k], dv, inv[k+1], p25[k+1], p26[k+1];
    num[0] = n;
    loop(i,1,k) num[i] = (num[i-1] * (n + i)) % MOD;

    inv[0] = inv[1] = 1;
    dv = 1;
    loop(i,2,k+1)
    {
        dv = (dv * i) % MOD;
        if(dv != 1)
        {
            LL x, y;
            inv_mod(dv,MOD,x,y);
            inv[i] = (x + MOD) % MOD;
        }