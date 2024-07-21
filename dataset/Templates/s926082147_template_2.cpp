template <typename T,typename Q>
T min(T a,Q b)
{
    if(a>b)
        return b;
    return a;
}