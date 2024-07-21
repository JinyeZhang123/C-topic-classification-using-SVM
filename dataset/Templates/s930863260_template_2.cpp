template <typename T>
    struct fenwick
    {
        int n;
        std::vector<T> f;
        fenwick(int n) : n(n), f(n + 1) {}