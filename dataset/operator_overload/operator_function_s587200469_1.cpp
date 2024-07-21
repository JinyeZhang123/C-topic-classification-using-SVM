bool operator<(const node1&a,const node1&b)
{
    return a.val+b.Min>b.val+a.Min;
}