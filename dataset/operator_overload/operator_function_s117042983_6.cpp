bool operator>(const T3 &lhs, const T3 &rhs)
{
        if (lhs.t0 != rhs.t0) return lhs.t0 > rhs.t0;
        if (lhs.t1 != rhs.t1) return lhs.t1 > rhs.t1;
        return lhs.t2 > rhs.t2;
}