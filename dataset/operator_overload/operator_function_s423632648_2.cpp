poly operator-(const poly&a,const poly&b)
{
    int n=a.deg(),m=b.deg();
    poly ret(max(n,m));
    for(ri i=0;i<=n;++i)
        Add(ret[i],a[i]);
    for(ri i=0;i<=m;++i)
        Dec(ret[i],b[i]);
    return ret;
}