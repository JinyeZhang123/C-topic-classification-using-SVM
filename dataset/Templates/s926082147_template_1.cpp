template <typename T,typename Q>
T max(T a,Q b)
{
    if(a<b)
        return b;
    return a;
}