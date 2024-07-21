bool operator<(const Seg &a,const Seg &b)
{
    if(a.r==b.r)
        return a.l<b.l;
    else return a.r<b.r;
}