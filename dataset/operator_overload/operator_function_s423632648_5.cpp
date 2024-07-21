poly operator%(poly a,poly b)
{
    int n=a.deg(),m=b.deg();
    if(n<m)
        return a;
    for(ri t,i=n;i>=m;--i)
    {
        t=a[i];
        for(ri j=i,tt=m;~tt;--tt,--j)
            Dec(a[j],mul(b[tt],t));
    }