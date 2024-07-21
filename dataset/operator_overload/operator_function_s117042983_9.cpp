bool operator<(const T4 &lhs, const T4 &rhs)
{
        if (lhs.t0 != rhs.t0) return lhs.t0 < rhs.t0;
        if (lhs.t1 != rhs.t1) return lhs.t1 < rhs.t1;
        if (lhs.t2 != rhs.t2) return lhs.t2 < rhs.t2;
        return lhs.t3 < rhs.t3;
}