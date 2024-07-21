bool operator<(const team& a, const team& b)
{
    if(a.acc==b.acc)
    {
        if(a.time==b.time)
        {
            return a.id>b.id;
        }