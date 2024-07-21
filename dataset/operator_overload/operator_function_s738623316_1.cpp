matrix operator *(matrix m1)
                {
                    int n=m1.data.size();
                    matrix m2(n);

                    forn(i,n)
                    {
                        forn(j,n)
                        {
                            forn(k,n)
                            {
                                m2.data[i][k]+=((m1.data[i][j]%1000000007)*(data[j][k]%1000000007))%1000000007;
                                m2.data[i][k]%=1000000007;
                            }