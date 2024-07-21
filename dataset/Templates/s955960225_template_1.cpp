template <typename T>
T gcd(const T a, const T b)
{
    return (b != 0) ? gcd(b, a % b) : a;
}