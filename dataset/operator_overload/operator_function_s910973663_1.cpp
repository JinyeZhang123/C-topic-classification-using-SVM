mat operator*(mat& s)
    {
        mat ret;
        forn(i,n)
        {
            forn(j,n)
            {
                forn(k,n)
                {
                    ll temp=(a[i][j]*s.a[j][k])%mod;
                    add_self(ret.a[i][k],temp);
                }