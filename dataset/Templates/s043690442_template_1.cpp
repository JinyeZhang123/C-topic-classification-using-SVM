template <typename T>
    inline void read(T &x)
    {
        bool neg = false;
        x = 0;
        while ((*rb < '0' || *rb > '9') && *rb != '-')
            ++rb;
        while ('0' <= *rb && *rb <= '9')
        {
            x = 10 * x + (*rb - '0');
            ++rb;
        }