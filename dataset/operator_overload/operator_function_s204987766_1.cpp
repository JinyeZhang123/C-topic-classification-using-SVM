bool operator<(const team& a, const team& b)
{
    if(a.ct==b.ct)
    {
        if(a.pen==b.pen)
        {
            return a.id<b.id;
        }