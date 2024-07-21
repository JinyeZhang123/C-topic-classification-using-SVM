mint operator+=(const mint &rhs)
    {
        return num = (num + rhs.num) % mod;
    }