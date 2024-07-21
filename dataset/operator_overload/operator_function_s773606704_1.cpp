mat operator*(const mat &a,const mat &b)
{
    mat res(n,vector<ll>(n,0)); //j=ob=ia
    for(int ib=0;ib<n;ib++)
    {
        for(int j=0;j<n;j++)
        {
            for(int oa=0;oa<n;oa++)
            {
                res[oa][ib]=(res[oa][ib]+a[oa][j]*b[j][ib])%mod;
            }