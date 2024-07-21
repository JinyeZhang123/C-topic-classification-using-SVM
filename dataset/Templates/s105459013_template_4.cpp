template <typename T>
T my_lcm(T a, T b)
{
    T c = my_gcd(a, b);
    return a * b / c;
}