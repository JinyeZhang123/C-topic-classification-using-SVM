template <typename T, typename S, typename R>
ll pow_mod(T p, S q, R mod = 1ll)
{
    ll ret = 1, r = p;
    while (q)
    {
        if (q % 2)
            ret *= r, ret %= mod;
        r = (r * r) % mod, q /= 2;
    }