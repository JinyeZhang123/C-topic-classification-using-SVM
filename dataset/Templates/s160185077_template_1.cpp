template <typename T>
bool chmax(T &u, const T z)
{
    if (u < z)
    {
        u = z;
        return true;
    }