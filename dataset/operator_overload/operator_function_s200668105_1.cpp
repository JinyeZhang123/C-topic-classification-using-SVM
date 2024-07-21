bool operator <(str2 a,str2 b)
{
    return a.r<b.r||a.r==b.r&&a.l<b.l;
}