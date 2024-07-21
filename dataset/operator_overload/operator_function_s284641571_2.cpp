bool operator<(const pt& b)
    {
        if (x == b.x) return y < b.y;
        return x < b.x;
    }