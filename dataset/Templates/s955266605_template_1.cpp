template <typename T>
T lcm(T x, T y)
{
    T z = gcd(x, y);
    return x * y / z;
}