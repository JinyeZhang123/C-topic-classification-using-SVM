template <typename T = int>
T lcm(T m, T n) {
    if ((0 == m) || (0 == n))
        return 0;
    return ((m / gcd(m, n)) * n);
}