template <typename T>
T my_gcd(T a, T b)
{
    T tmp;
    if (a > b)
        swap(a, b);
    while (a > 0)
    {
        tmp = a;
        a = b % a;
        b = tmp;
    }