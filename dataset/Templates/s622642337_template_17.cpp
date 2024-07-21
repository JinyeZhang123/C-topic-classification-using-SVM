template <typename T = long long>
long long extgcd(T a, T b, T &x, T &y)
{
    if (!b)
    {
        x = 1, y = 0;
        return a;
    }