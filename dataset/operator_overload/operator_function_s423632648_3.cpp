poly operator*(const int&a,const poly&b)
{
    poly ret=b;
    for(ri i=0,n=ret.deg();i<=n;++i)
        Mul(ret[i],a);
    return ret;
}