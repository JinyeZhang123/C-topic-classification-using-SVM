template <typename T, typename S>
ll pow_no_mod(T p, S q)
{
    ll ret = 1, r = p;
    while (q)
    {
        if (q % 2)
            ret *= r;
        r = (r * r), q /= 2;
    }