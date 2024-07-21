template <typename T>
T my_pow_with_mod(T x, T a, T mod)
{
    ll ans = 1;
    ll b = x;
    while (a)
    {
        if (a & 1)
            ans *= b;
        ans %= mod;
        a = a >> 1;
        b = b * b;
        b %= mod;
    }