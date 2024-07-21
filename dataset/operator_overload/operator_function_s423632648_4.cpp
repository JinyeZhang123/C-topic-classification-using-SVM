poly operator*(poly a,poly b)
{
    int n=a.deg(),m=b.deg(),t=n+m;
    poly c(t);
    for(ri i=0;i<=n;++i)
        for(ri j=0;j<=m;++j)
            Add(c[i+j],mul(a[i],b[j]));
    return c;
}