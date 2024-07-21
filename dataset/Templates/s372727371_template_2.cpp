template <typename T>
    T lcm(T m, T n) {
        return m / cplib::gcd(m, n) * n;
    }